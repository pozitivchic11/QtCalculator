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

private:
	std::vector<QString> dataVector;
	std::vector<QString> firstVector;
	std::vector<QString> secondVector;

	QString data_from_edit;
	QString firstValue;
	QString secondValue;

	int size;
};