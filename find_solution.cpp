#include "find_solution.h"

FindSolution::FindSolution(){}

FindSolution::~FindSolution(){}

void FindSolution::setTextFromEdit(QString textFromEdit)
{
	this->textFromEdit = textFromEdit;
}

QString FindSolution::getTextFromEdit() { return textFromEdit; }

QString FindSolution::getOperator() { return op; }

float FindSolution::getFirstValue() { return firstValue; }

float FindSolution::getSecondValue() { return secondValue; }

void FindSolution::fillVectors()
{
	int i = 0;

	if (textFromEdit[0] == '-') {
		i++;
	}

	for (i; i < textFromEdit.size(); i++) {
		if (textFromEdit[i] == '0') {
			firstVector.push_back('0');
		}
		else if (textFromEdit[i] == '1') {
			firstVector.push_back('1');
		}
		else if (textFromEdit[i] == '2') {
			firstVector.push_back('2');
		}
		else if (textFromEdit[i] == '3') {
			firstVector.push_back('3');
		}
		else if (textFromEdit[i] == '4') {
			firstVector.push_back('4');
		}
		else if (textFromEdit[i] == '5') {
			firstVector.push_back('5');
		}
		else if (textFromEdit[i] == '6') {
			firstVector.push_back('6');
		}
		else if (textFromEdit[i] == '7') {
			firstVector.push_back('7');
		}
		else if (textFromEdit[i] == '8') {
			firstVector.push_back('8');
		}
		else if (textFromEdit[i] == '9') {
			firstVector.push_back('9');
		}
		else if (textFromEdit[i] == '.') {
			firstVector.push_back('.');
		}
		else { break; }
	}

	i++;

	if (textFromEdit[i] == '-') { i++; }

	for (i; i < textFromEdit.size(); i++) {
		if (textFromEdit[i] == '0') {
			secondVector.push_back('0');
		}
		else if (textFromEdit[i] == '1') {
			secondVector.push_back('1');
		}
		else if (textFromEdit[i] == '2') {
			secondVector.push_back('2');
		}
		else if (textFromEdit[i] == '3') {
			secondVector.push_back('3');
		}
		else if (textFromEdit[i] == '4') {
			secondVector.push_back('4');
		}
		else if (textFromEdit[i] == '5') {
			secondVector.push_back('5');
		}
		else if (textFromEdit[i] == '6') {
			secondVector.push_back('6');
		}
		else if (textFromEdit[i] == '7') {
			secondVector.push_back('7');
		}
		else if (textFromEdit[i] == '8') {
			secondVector.push_back('8');
		}
		else if (textFromEdit[i] == '9') {
			secondVector.push_back('9');
		}
		else if (textFromEdit[i] == '.') {
			secondVector.push_back('.');
		}
		else { break; }
	}
}

void FindSolution::concatenateValues()
{
	for (int i = 0; i < firstVector.size(); i++)
	{
		firstValue_str += firstVector[i];
	}

	firstValue = std::stof(firstValue_str);

	if (textFromEdit[0] == '-') { firstValue *= -1; }

	for (int i = 0; i < secondVector.size(); i++)
	{
		secondValue_str += secondVector[i];
	}

	secondValue = std::stof(secondValue_str);

	if (checkMinus) { secondValue *= -1; }
}

void FindSolution::findOperator()
{
	int i = 0;

	while (i < textFromEdit.size()) {
		if ((i != 0) and (textFromEdit[i] == '%')) {
			op = '%';
			if (textFromEdit[i + 1] == '-') { checkMinus = true; }
			break;
		}
		else if ((i != 0) and (textFromEdit[i] == '/')) {
			op = '/';
			if (textFromEdit[i + 1] == '-') { checkMinus = true; }
			break;
		}
		else if ((i != 0) and (textFromEdit[i] == '*')) {
			op = '*';
			if (textFromEdit[i + 1] == '-') { checkMinus = true; }
			break;
		}
		else if ((i != 0) and (textFromEdit[i] == '-')) {
			op = '-';
			if (textFromEdit[i + 1] == '-') { checkMinus = true; }
			break;
		}
		else if ((i != 0) and (textFromEdit[i] == '+')) {
			op = '+';
			if (textFromEdit[i + 1] == '-') { checkMinus = true; }
			break;
		}
		i++;
	}
}

float FindSolution::calculateAnswer()
{
	if (op == '%') {
		return (static_cast<int>(firstValue) % static_cast<int>(secondValue));
	}
	else if (op == '*') {
		return (firstValue * secondValue);
	}
	else if (op == '/') {
		return (firstValue / secondValue);
	}
	else if (op == '+') {
		return (firstValue + secondValue);
	}
	else if (op == '-') {
		return (firstValue - secondValue);
	}
}