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

	for (int i = 0; i < dataVector.size(); i++) {
		if ((!dual_vector) and (dataVector[i] != "%") or (dataVector[i] != "/") or (dataVector[i] != "*") or (dataVector[i] != "-") or (dataVector[i] != "+")) {
			firstVector.push_back(dataVector[i]);
		}
		else if((dataVector[i] != "%") or (dataVector[i] != "/") or (dataVector[i] != "*") or (dataVector[i] != "-") or (dataVector[i] != "+")) {
			dual_vector = true;
		}
		else if (dual_vector) { secondVector.push_back(dataVector[i]); }
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