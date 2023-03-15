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
	std::vector<char> firstVector;
	std::vector<char> secondVector;

	std::string firstValue_str;
	std::string secondValue_str;

	QString textFromEdit;
	QString op = nullptr;

	bool checkMinus = false;

	float firstValue = NULL;
	float secondValue = NULL;

	bool checkIfOperationAdded = false;
};