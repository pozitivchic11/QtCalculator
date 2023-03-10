#pragma once

#include <QString>
#include <vector>
#include <string>

#include "QtCalculator.h"

class FindSolution
{
public:
	FindSolution();
	~FindSolution();

	float getFirstValue();
	float getSecondValue();

	float calculateAnswer();

	QString getTextFromEdit();
	QString getOperator();

	void setTextFromEdit(const QString textFromEdit);
	void concatenateValues();
	void findOperator();
	void fillVectors();

private:
	std::vector<float> firstVector;
	std::vector<float> secondVector;

	QString textFromEdit;
	QString op;

	bool checkMinus = false;

	float firstValue = 0;
	float secondValue = 0;

	bool checkIfOperationAdded = false;
};