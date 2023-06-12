#include <QtTest>
#include <QApplication>
#include "../../server/translate.h"

// add necessary includes here

class TransTest : public QObject
{
    Q_OBJECT

public:
    TransTest();
    ~TransTest();

private slots:
    void test_case1();

};

TransTest::TransTest()
{

}

TransTest::~TransTest()
{

}

void TransTest::test_case1()
{
    QString input = "hello";
    QString language = "ru";
    QString result = "привет";
    QVERIFY(translateText("hello", "ru") == result);
}

QTEST_APPLESS_MAIN(TransTest)

#include "tst_transtest.moc"
