#ifndef TRANSLATE_H
#define TRANSLATE_H

#include <QEventLoop>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QUrlQuery>
#include <QFile>
#include <QTextStream>

QString translateText(const QString& text, const QString& targetLanguageCode);
QString getApi();

#endif	// TRANSLATE_H
