#pragma once

#include <QString>
#include <vector>

class FindSolution
{
public:
	FindSolution(QString& data_from_edit);

	void fillDataArray();

private:
	QString data_from_edit;
	std::vector<QString> dataVector;
	int size;
};