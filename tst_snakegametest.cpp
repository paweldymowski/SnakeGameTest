#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include "/home/pawel/SnakeGame/snakebodypart.h"
#include "/home/pawel/SnakeGame/snakebodypart.cpp"
#include <QApplication>
#include <QObject>
#include "/home/pawel/SnakeGame/food.h"
#include "/home/pawel/SnakeGame/food.cpp"
#include "/home/pawel/SnakeGame/border.h"
#include "/home/pawel/SnakeGame/border.cpp"

class SnakeGameTest : public QObject
{
    Q_OBJECT

public:
    SnakeGameTest();

private Q_SLOTS:
    void SnakeBodyPart_constructor_test();
    void Food_constructor_test();
    void Border_constructor_test();
};

SnakeGameTest::SnakeGameTest()
{
}

void SnakeGameTest::SnakeBodyPart_constructor_test()
{
    SnakeBodyPart part(1, 1);
    QVERIFY(part.x() == 1);
    QVERIFY(part.x() == 1);
}

void SnakeGameTest::Food_constructor_test()
{
    Food f;
    QVERIFY(f.x() <= 760);
    QVERIFY(f.x() >= 20);
    QVERIFY(f.y() <= 560);
    QVERIFY(f.y() >= 20);
}

void SnakeGameTest::Border_constructor_test()
{
    Border b(1, 2, 3, 4);
    QVERIFY(b.x() == 1);
    QVERIFY(b.y() == 2);
}

QTEST_MAIN(SnakeGameTest)

#include "tst_snakegametest.moc"
