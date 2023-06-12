#include <QtTest>
#include "../../server/singletondb.h"

// add necessary includes here

class RegTest : public QObject
{
    Q_OBJECT

public:
    RegTest();
    ~RegTest();

private slots:
    void test_case1();

};

RegTest::RegTest()
{

}

RegTest::~RegTest()
{

}

void RegTest::test_case1()
{
    QString result = "reg&0";
    QVERIFY(add_new_user("input1", "input2", "input3", "input4") == result);
}

QTEST_APPLESS_MAIN(RegTest)

#include "tst_regtest.moc"
