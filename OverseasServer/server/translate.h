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

QString translateText(const QString& text, const QString& sourceLanguageCode,
                      const QString& targetLanguageCode);

#endif	// TRANSLATE_H
