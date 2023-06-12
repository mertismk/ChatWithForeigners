#include <QtTest>
#include "../../server/singletondb.h"
// add necessary includes here

class DialogTest : public QObject
{
    Q_OBJECT

public:
    DialogTest();
    ~DialogTest();

private slots:
    void test_case1();

};

DialogTest::DialogTest()
{

}

DialogTest::~DialogTest()
{

}

void DialogTest::test_case1()
{
    QString result = "dialog&create&complete";
    QVERIFY(create_new_dialog("first_user", "second_user")== result);
}

QTEST_APPLESS_MAIN(DialogTest)

#include "tst_dialogtest.moc"
