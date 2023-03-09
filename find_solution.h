#pragma once

#include <QString>
#include <vector>
#include <string>

#include "QtCalculator.h"

class FindSolution
{
public:
	FindSolution(QString data_from_edit);

	void fillDataArray();

	void fillValuesArrays();

	void concatenateArrays();

	QString getFirstValue();

	QString getSecondValue();

	int getFirstValue_int();

	int getSecondValue_int();

private:
	std::vector<QString> dataVector;
	std::vector<QString> firstVector;
	std::vector<QString> secondVector;

	QString data_from_edit;
	QString firstValue;
	QString secondValue;

	const int firstValue_int = firstValue.toInt();
	const int secondValue_int = secondValue.toInt();

	int size;
};