/********************************************************************************
** Form generated from reading UI file 'QtCalculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCALCULATOR_H
#define UI_QTCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCalculatorClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *eraseButton;
    QPushButton *pushButton_4;
    QPushButton *modButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *divideButton;
    QPushButton *clearButton;
    QPushButton *pushButton_8;
    QPushButton *multiplyButton;
    QPushButton *pushButton_9;
    QPushButton *deductButton;
    QPushButton *addButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *minusButton;
    QPushButton *pushButton_0;
    QPushButton *dotButton;
    QPushButton *resultButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtCalculatorClass)
    {
        if (QtCalculatorClass->objectName().isEmpty())
            QtCalculatorClass->setObjectName("QtCalculatorClass");
        QtCalculatorClass->resize(400, 600);
        QtCalculatorClass->setMinimumSize(QSize(400, 600));
        QtCalculatorClass->setMaximumSize(QSize(400, 600));
        QtCalculatorClass->setSizeIncrement(QSize(0, 0));
        centralWidget = new QWidget(QtCalculatorClass);
        centralWidget->setObjectName("centralWidget");
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 85, 401, 461));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        eraseButton = new QPushButton(gridLayoutWidget);
        eraseButton->setObjectName("eraseButton");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eraseButton->sizePolicy().hasHeightForWidth());
        eraseButton->setSizePolicy(sizePolicy);
        eraseButton->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font.setPointSize(20);
        eraseButton->setFont(font);

        gridLayout->addWidget(eraseButton, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(0, 0));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        modButton = new QPushButton(gridLayoutWidget);
        modButton->setObjectName("modButton");
        sizePolicy.setHeightForWidth(modButton->sizePolicy().hasHeightForWidth());
        modButton->setSizePolicy(sizePolicy);
        modButton->setMinimumSize(QSize(0, 0));
        modButton->setFont(font);

        gridLayout->addWidget(modButton, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(0, 0));
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(0, 0));
        pushButton_1->setFont(font);

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(0, 0));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 0));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        divideButton = new QPushButton(gridLayoutWidget);
        divideButton->setObjectName("divideButton");
        sizePolicy.setHeightForWidth(divideButton->sizePolicy().hasHeightForWidth());
        divideButton->setSizePolicy(sizePolicy);
        divideButton->setMinimumSize(QSize(0, 0));
        divideButton->setFont(font);

        gridLayout->addWidget(divideButton, 0, 3, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget);
        clearButton->setObjectName("clearButton");
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        clearButton->setMinimumSize(QSize(0, 0));
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(0, 0));
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        multiplyButton = new QPushButton(gridLayoutWidget);
        multiplyButton->setObjectName("multiplyButton");
        sizePolicy.setHeightForWidth(multiplyButton->sizePolicy().hasHeightForWidth());
        multiplyButton->setSizePolicy(sizePolicy);
        multiplyButton->setMinimumSize(QSize(0, 0));
        multiplyButton->setFont(font);

        gridLayout->addWidget(multiplyButton, 1, 3, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(0, 0));
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        deductButton = new QPushButton(gridLayoutWidget);
        deductButton->setObjectName("deductButton");
        sizePolicy.setHeightForWidth(deductButton->sizePolicy().hasHeightForWidth());
        deductButton->setSizePolicy(sizePolicy);
        deductButton->setMinimumSize(QSize(0, 0));
        deductButton->setFont(font);

        gridLayout->addWidget(deductButton, 2, 3, 1, 1);

        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName("addButton");
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(0, 0));
        addButton->setFont(font);

        gridLayout->addWidget(addButton, 3, 3, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(0, 0));
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(0, 0));
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        minusButton = new QPushButton(gridLayoutWidget);
        minusButton->setObjectName("minusButton");
        sizePolicy.setHeightForWidth(minusButton->sizePolicy().hasHeightForWidth());
        minusButton->setSizePolicy(sizePolicy);
        minusButton->setMinimumSize(QSize(0, 0));
        minusButton->setFont(font);

        gridLayout->addWidget(minusButton, 4, 0, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMinimumSize(QSize(0, 0));
        pushButton_0->setFont(font);

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        dotButton = new QPushButton(gridLayoutWidget);
        dotButton->setObjectName("dotButton");
        sizePolicy.setHeightForWidth(dotButton->sizePolicy().hasHeightForWidth());
        dotButton->setSizePolicy(sizePolicy);
        dotButton->setMinimumSize(QSize(0, 0));
        dotButton->setFont(font);

        gridLayout->addWidget(dotButton, 4, 2, 1, 1);

        resultButton = new QPushButton(gridLayoutWidget);
        resultButton->setObjectName("resultButton");
        sizePolicy.setHeightForWidth(resultButton->sizePolicy().hasHeightForWidth());
        resultButton->setSizePolicy(sizePolicy);
        resultButton->setMinimumSize(QSize(0, 0));
        resultButton->setFont(font);

        gridLayout->addWidget(resultButton, 4, 3, 1, 1);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 401, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(36);
        lineEdit->setFont(font1);

        verticalLayout->addWidget(lineEdit);

        QtCalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtCalculatorClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        QtCalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtCalculatorClass);
        mainToolBar->setObjectName("mainToolBar");
        QtCalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtCalculatorClass);
        statusBar->setObjectName("statusBar");
        QtCalculatorClass->setStatusBar(statusBar);

        retranslateUi(QtCalculatorClass);

        QMetaObject::connectSlotsByName(QtCalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtCalculatorClass)
    {
        QtCalculatorClass->setWindowTitle(QCoreApplication::translate("QtCalculatorClass", "QtCalculator", nullptr));
        eraseButton->setText(QCoreApplication::translate("QtCalculatorClass", "<--", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QtCalculatorClass", "4", nullptr));
        modButton->setText(QCoreApplication::translate("QtCalculatorClass", "%", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QtCalculatorClass", "5", nullptr));
        pushButton_1->setText(QCoreApplication::translate("QtCalculatorClass", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QtCalculatorClass", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QtCalculatorClass", "2", nullptr));
        divideButton->setText(QCoreApplication::translate("QtCalculatorClass", "/", nullptr));
        clearButton->setText(QCoreApplication::translate("QtCalculatorClass", "C", nullptr));
        pushButton_8->setText(QCoreApplication::translate("QtCalculatorClass", "8", nullptr));
        multiplyButton->setText(QCoreApplication::translate("QtCalculatorClass", "*", nullptr));
        pushButton_9->setText(QCoreApplication::translate("QtCalculatorClass", "9", nullptr));
        deductButton->setText(QCoreApplication::translate("QtCalculatorClass", "-", nullptr));
        addButton->setText(QCoreApplication::translate("QtCalculatorClass", "+", nullptr));
        pushButton_7->setText(QCoreApplication::translate("QtCalculatorClass", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QtCalculatorClass", "6", nullptr));
        minusButton->setText(QCoreApplication::translate("QtCalculatorClass", "+/-", nullptr));
        pushButton_0->setText(QCoreApplication::translate("QtCalculatorClass", "0", nullptr));
        dotButton->setText(QCoreApplication::translate("QtCalculatorClass", ".", nullptr));
        resultButton->setText(QCoreApplication::translate("QtCalculatorClass", "=", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtCalculatorClass: public Ui_QtCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCALCULATOR_H
