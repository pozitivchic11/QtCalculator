#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCalculator.h"
#include <vector>
#include "QtCalculator.h"

class FindAnswer
{
public:
    FindAnswer(QString& dataFromEdit) {}

    void fillVector();

protected:
    QString dataFromEdit;
    std::vector<char> dataVector;

};

class AddMinus : public FindAnswer
{

};
