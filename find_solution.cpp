#include "find_solution.h"

FindSolution::FindSolution(QString& data_from_edit) : data_from_edit(data_from_edit)
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