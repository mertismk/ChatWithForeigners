#include <QtTest>
#include "../../server/singletondb.h"
// add necessary includes here

class AuthTest : public QObject
{
    Q_OBJECT

public:
    AuthTest();
    ~AuthTest();

private slots:
    void test_case1();

};

AuthTest::AuthTest()
{

}

AuthTest::~AuthTest()
{

}

void AuthTest::test_case1()
{
    QString result = "auth&0";
    QVERIFY(find_user_for_auth("input1","input2") == result);
}

QTEST_APPLESS_MAIN(AuthTest)

#include "tst_authtest.moc"
