#pragma once
#include "Person.h"
#include <string>

// Base class
class Vehicle
{
public:
	//constructors
	Vehicle();
	Vehicle(std::string, int, Person);
	Vehicle(const Vehicle&);
	//destructor
	~Vehicle();
	//accessors
	std::string getManufacture();
	int getCylinders();
	Person getPerson();
	//mutators
	void setManufacture(std::string);
	void setCylinders(int);
	void setPerson(const Person& orig);

private:
protected:
	std::string manufacture_;
	int cylinders_;
	Person Owner_;
};