#include "translate.h"

const QString YANDEX_FOLDER_ID = "b1g3mdf1hifkgr4hhdsj";
const QString YANDEX_API_KEY = ""; // сюда ключ

QString translateText(const QString& text, const QString& targetLanguageCode) {
    QNetworkAccessManager manager;
    QNetworkRequest request;
    QUrl url("https://translate.api.cloud.yandex.net/translate/v2/translate");
    QJsonObject json;

    json["targetLanguageCode"] = targetLanguageCode;
    json["format"] = "PLAIN_TEXT";
    json["texts"] = QJsonArray::fromStringList({text});
    json["folderId"] = YANDEX_FOLDER_ID;

    request.setUrl(url);
    request.setRawHeader("Authorization",
                         QString("Bearer %1").arg(YANDEX_API_KEY).toUtf8());

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply* reply = manager.post(request, QJsonDocument(json).toJson());
    QEventLoop loop;

    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QByteArray response_data = reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QJsonArray translations = json_obj.value("translations").toArray();
    QJsonObject first_translation = translations.first().toObject();

    return first_translation.value("text").toString();
}

