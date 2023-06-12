#include <QtTest>
#include "../../server/singletondb.h"
// add necessary includes here

class ChangeNameTest : public QObject
{
    Q_OBJECT

public:
    ChangeNameTest();
    ~ChangeNameTest();

private slots:
    void test_case1();

};

ChangeNameTest::ChangeNameTest()
{

}

ChangeNameTest::~ChangeNameTest()
{

}

void ChangeNameTest::test_case1()
{
    QString result = "username&change&complete";
    QVERIFY(change_username("new_username", "old_username") == "username&change&not&complete");
}

QTEST_APPLESS_MAIN(ChangeNameTest)

#include "tst_changenametest.moc"
