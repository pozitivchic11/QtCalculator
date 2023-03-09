#include "QtCalculator.h"

QtCalculator::QtCalculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.modButton, &QPushButton::clicked, this, &QtCalculator::modButton);
    connect(ui.divideButton, &QPushButton::clicked, this, &QtCalculator::divideButton);
    connect(ui.multiplyButton, &QPushButton::clicked, this, &QtCalculator::multiplyButton);
    connect(ui.deductButton, &QPushButton::clicked, this, &QtCalculator::deductButton);
    connect(ui.addButton, &QPushButton::clicked, this, &QtCalculator::addButton);
    connect(ui.dotButton, &QPushButton::clicked, this, &QtCalculator::dotButton);
    connect(ui.clearButton, &QPushButton::clicked, this, &QtCalculator::clearButton);
    connect(ui.pushButton_0, &QPushButton::clicked, this, &QtCalculator::pushButton_0);
    connect(ui.pushButton_1, &QPushButton::clicked, this, &QtCalculator::pushButton_1);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &QtCalculator::pushButton_2);
    connect(ui.pushButton_3, &QPushButton::clicked, this, &QtCalculator::pushButton_3);
    connect(ui.pushButton_4, &QPushButton::clicked, this, &QtCalculator::pushButton_4);
    connect(ui.pushButton_5, &QPushButton::clicked, this, &QtCalculator::pushButton_5);
    connect(ui.pushButton_6, &QPushButton::clicked, this, &QtCalculator::pushButton_6);
    connect(ui.pushButton_7, &QPushButton::clicked, this, &QtCalculator::pushButton_7);
    connect(ui.pushButton_8, &QPushButton::clicked, this, &QtCalculator::pushButton_8);
    connect(ui.pushButton_9, &QPushButton::clicked, this, &QtCalculator::pushButton_9);
    connect(ui.eraseButton, &QPushButton::clicked, this, &QtCalculator::eraseButton);
    connect(ui.resultButton, &QPushButton::clicked, this, &QtCalculator::resultButton);
}

QtCalculator::~QtCalculator(){}


void QtCalculator::modButton()
{
    insertOperationSymbol("%");
}

void QtCalculator::divideButton()
{
    insertOperationSymbol("/");
}

void QtCalculator::multiplyButton()
{
    insertOperationSymbol("*");
}

void QtCalculator::deductButton()
{
    insertOperationSymbol("-");
}

void QtCalculator::addButton()
{
    insertOperationSymbol("+");
}

void QtCalculator::dotButton()
{
    ui.lineEdit->insert(".");
}

void QtCalculator::pushButton_0()
{
    ui.lineEdit->insert("0");
}

void QtCalculator::pushButton_1()
{
    ui.lineEdit->insert("1");
}

void QtCalculator::pushButton_2()
{
    ui.lineEdit->insert("2");
}

void QtCalculator::pushButton_3()
{
    ui.lineEdit->insert("3");
}

void QtCalculator::pushButton_4()
{
    ui.lineEdit->insert("4");
}

void QtCalculator::pushButton_5()
{
    ui.lineEdit->insert("5");
}

void QtCalculator::pushButton_6()
{
    ui.lineEdit->insert("6");
}

void QtCalculator::pushButton_7()
{
    ui.lineEdit->insert("7");
}

void QtCalculator::pushButton_8()
{
    ui.lineEdit->insert("8");
}

void QtCalculator::pushButton_9()
{
    ui.lineEdit->insert("9");
}

void QtCalculator::eraseButton()
{
    if (!(ui.lineEdit->text().isEmpty())) {
        if (checkIfOperationErased(ui.lineEdit->text().back()))
        {
            ui.lineEdit->backspace();

            checkIfOperationExist = false;
        }
        else { ui.lineEdit->backspace(); }
    }
}

void QtCalculator::clearButton()
{
    if (!checkIfOperationExist) {
        ui.lineEdit->clear();
    }
    else { ui.lineEdit->clear(); checkIfOperationExist = false; }
    
}

bool QtCalculator::checkIfOperationErased(QString op)
{
    if (op == "%") {
        return true;
    }
    else if(op == "/") {
        return true;
    }
    else if (op == "*") {
        return true;
    }
    else if (op == "-") {
        return true;
    }
    else if (op == "+") {
        return true;
    }
    else { return false; }
}

void QtCalculator::insertOperationSymbol(const char* op) {
    try {
        if(!checkIfOperationExist)
        {
            ui.lineEdit->insert(op);

            checkIfOperationExist = true;
        }
        else { throw op; }
    }
    catch (const char* op)
    {
        QMessageBox::warning(this, "OperationWarning", ("The operation symbol already exist!"));   
    }
}

void QtCalculator::resultButton()
{
    FindSolution fs(ui.lineEdit->text());

    fs.fillDataArray();

    fs.fillValuesArrays();

    fs.concatenateArrays();

    ui.addButton->setText(fs.getSecondValue());
}