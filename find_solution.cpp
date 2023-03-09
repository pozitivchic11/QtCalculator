#include "find_solution.h"

FindSolution::FindSolution(){}

FindSolution::~FindSolution(){}

void FindSolution::setTextFromEdit(QString textFromEdit)
{
	this->textFromEdit = textFromEdit;
}

QString FindSolution::getTextFromEdit() { return textFromEdit; }

int FindSolution::getFirstValue() { return firstValue; }

int FindSolution::getSecondValue() { return secondValue; }

void FindSolution::fillVectors()
{
	int i = 0;

	for (i; i < textFromEdit.size(); i++) {
		if (textFromEdit[i] == '0') {
			firstVector.push_back(0);
		}
		else if (textFromEdit[i] == '1') {
			firstVector.push_back(1);
		}
		else if (textFromEdit[i] == '2') {
			firstVector.push_back(2);
		}
		else if (textFromEdit[i] == '3') {
			firstVector.push_back(3);
		}
		else if (textFromEdit[i] == '4') {
			firstVector.push_back(4);
		}
		else if (textFromEdit[i] == '5') {
			firstVector.push_back(5);
		}
		else if (textFromEdit[i] == '6') {
			firstVector.push_back(6);
		}
		else if (textFromEdit[i] == '7') {
			firstVector.push_back(7);
		}
		else if (textFromEdit[i] == '8') {
			firstVector.push_back(8);
		}
		else if (textFromEdit[i] == '9') {
			firstVector.push_back(9);
		}
		else { break; }
	}

	i++;

	for (i; i < textFromEdit.size(); i++) {
		if (textFromEdit[i] == '0') {
			secondVector.push_back(0);
		}
		else if (textFromEdit[i] == '1') {
			secondVector.push_back(1);
		}
		else if (textFromEdit[i] == '2') {
			secondVector.push_back(2);
		}
		else if (textFromEdit[i] == '3') {
			secondVector.push_back(3);
		}
		else if (textFromEdit[i] == '4') {
			secondVector.push_back(4);
		}
		else if (textFromEdit[i] == '5') {
			secondVector.push_back(5);
		}
		else if (textFromEdit[i] == '6') {
			secondVector.push_back(6);
		}
		else if (textFromEdit[i] == '7') {
			secondVector.push_back(7);
		}
		else if (textFromEdit[i] == '8') {
			secondVector.push_back(8);
		}
		else if (textFromEdit[i] == '9') {
			secondVector.push_back(9);
		}
		else { break; }
	}
}

void FindSolution::concatenateValues()
{
	for (int i = 0; i < firstVector.size(); i++)
	{
		if (firstVector.size() - 1 == i) {
			firstValue += firstVector[i];
		}
		else { firstValue = (firstValue + firstVector[i]) * 10; }
	}

	for (int i = 0; i < secondVector.size(); i++)
	{
		if (secondVector.size() - 1 == i) {
			secondValue += secondVector[i];
		}
		else { secondValue = (secondValue + secondVector[i]) * 10; }
	}
}