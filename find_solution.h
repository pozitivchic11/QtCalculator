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

	int getFirstValue();
	int getSecondValue();

	void setTextFromEdit(const QString textFromEdit);
	QString getTextFromEdit();

	void concatenateValues();

	void fillVectors();

private:
	std::vector<int> firstVector;
	std::vector<int> secondVector;

	QString textFromEdit;

	int firstValue = 0;
	int secondValue = 0;

	bool checkIfOperationAdded = false;
};