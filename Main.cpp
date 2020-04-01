// Vehicle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Person.h"
#include "Vehicle.h"
#include "Truck.h"
#include <iostream>

using namespace std;

int main()
{
	string namePerson01 = "Isaac Newton";
	string namePerson02 = "James Last";

	Person prs01(namePerson01);
	Person prs02(namePerson02);

	cout << "Name of person 01 " << prs01.getName() << endl;
	cout << "Name of person 02 " << prs02.getName() << endl;
	cin >> prs01;
	cout << "Name of person 01 " << prs01 << endl;
	cout << "Name of person 02 " << prs02 << endl;

	prs01 = prs02;
	cout << "after assignment : " << endl;
	cout << "Name of person 01 " << prs01 << endl;
	cout << "Name of person 02 " << prs02 << endl;
}

