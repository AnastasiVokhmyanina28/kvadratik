#ifndef TEST_KV_H
#define TEST_KV_H
#include <QtTest>
#include "kv.h"
#include <QObject>

class Test_kv : public QObject {
Q_OBJECT
private slots:
    void set();
};


#endif // TEST_KV_H

