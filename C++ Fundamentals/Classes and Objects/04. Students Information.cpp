#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Students
{
public:
	string name;
	string surname;
	double average;


	Students(string name, string surname, double average) :
		name(name),
		surname(surname),
		average(average) {
	}


};


void printStudentsInfo(Students students) {
	cout << students.name << " " << students.surname << " " << students.average << endl;
}
double getAverage(int sum, int num) {
	sum = sum / num;
	return sum;
}


int main() {
	vector<Students> studentList;
	int num = 0;
	int sum = 0;

	cin >> num;
	for (size_t i = 0; i < num; ++i)
	{
		string name, surname;
		double average = 0;
		cin >> name >> surname >> average;

		studentList.push_back(Students(name, surname, average));
	}
	for (int i = 0; i < studentList.size(); ++i)
	{
		printStudentsInfo(studentList.at(i));
	}



	return 0;
}