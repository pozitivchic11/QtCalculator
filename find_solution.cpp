#include "find_solution.h"

FindSolution::FindSolution(QString data_from_edit) : data_from_edit(data_from_edit)
{
	this->size = data_from_edit.size();
}

void FindSolution::fillDataArray()
{
	for(int i = 0; i < data_from_edit.size(); i++)
	{
		dataVector.push_back(data_from_edit[i]);
	}
}

void FindSolution::fillValuesArrays()
{
	bool dual_vector = false;
	int i = 0;

	while (i < dataVector.size())
	{
		if (QtCalculator::checkIfOperationErased(dataVector[i])) {
			i++;
			break;
		}
		else { firstVector.push_back(dataVector[i]); i++; }
	}

	while (i < dataVector.size())
	{
		secondValue.push_back(dataVector[i]);

		i++;
	}
}

void FindSolution::concatenateArrays() {
	for (int i = 0; i < firstVector.size(); i++) {
		firstValue += firstVector[i];
	}

	for (int i = 0; i < secondVector.size(); i++) {
		secondValue += secondVector[i];
	}
}

QString FindSolution::getFirstValue() { return firstValue; }

QString FindSolution::getSecondValue(){ return secondValue; }

int FindSolution::getFirstValue_int() { return firstValue_int; };

int FindSolution::getSecondValue_int() { return secondValue_int; };