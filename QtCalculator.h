#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>

#include "ui_QtCalculator.h"
#include "find_solution.h"

class QtCalculator : public QMainWindow
{
    Q_OBJECT

public:
    QtCalculator(QWidget *parent = nullptr);
    ~QtCalculator();

    void insertOperationSymbol(const char* op);
    static bool checkIfOperationErased(QString op);

private slots:
    void modButton();
    void divideButton();
    void multiplyButton();
    void deductButton();
    void addButton();
    void dotButton();
    void minusButton();
    void pushButton_0();
    void pushButton_1();
    void pushButton_2();
    void pushButton_3();
    void pushButton_4();
    void pushButton_5();
    void pushButton_6();
    void pushButton_7();
    void pushButton_8();
    void pushButton_9();
    void clearButton();
    void eraseButton();
    void resultButton();

private:
    bool checkIfOperationExist = false;
    bool clearUp = false;

public:
    Ui::QtCalculatorClass ui;
};