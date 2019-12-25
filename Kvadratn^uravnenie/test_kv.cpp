#include <QtTest>
#include <kv.h>
#include <QObject>


class Test_kv : public QObject {
Q_OBJECT
private slots:
    void set();
};


void Test_kv::set()
{
    kv KV;
    QCOMPARE(KV.set("0", "0","0"), "Any number");
    QCOMPARE(KV.set("-1", "0","0"), "0");
    QCOMPARE(KV.set("9", "0","7"), "No roots");
    QCOMPARE(KV.set("-1", "0","36"), "6  -6");
    QCOMPARE(KV.set("1", "3","0"), "0  -3");
    QCOMPARE(KV.set("1", "-70","600"), "60  10");
    QCOMPARE(KV.set("-4", "28","-49"), "3.5");
    QCOMPARE(KV.set("5", "6","2"), "No roots");
    QCOMPARE(KV.set("a", "1","2"), "Incorrect input");
    QCOMPARE(KV.set("0", "b","2"), "Incorrect input");
    QCOMPARE(KV.set("3", "1","c"), "Incorrect input");
    QCOMPARE(KV.set("a", "b","c"), "Incorrect input");
    QCOMPARE(KV.set("2", "-3","-2"), "2  -0.5");
    QCOMPARE(KV.set("3", "5","-2"), "0.333333  -2");
}

QTEST_MAIN(Test_kv)
/* закоментировать   QTEST_MAIN(Test_kv) и убрать коментарии с функции main в main.cpp для запуска приложения а не тестов */

