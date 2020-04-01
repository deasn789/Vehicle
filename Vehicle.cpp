#include "Vehicle.h"
#include <string>

//constructors
Vehicle::Vehicle()
{
	manufacture_ = "default";
	cylinders_ = 0;
	Person();
}
Vehicle::Vehicle(std::string manu, int cyl, Person per)
{
	manufacture_ = manu;
	cylinders_ = cyl;
	Owner_ = per;
}
Vehicle::Vehicle(const Vehicle& orig)
{
	this->manufacture_ = orig.manufacture_;
	this->cylinders_ = orig.cylinders_;
	this->Owner_ = orig.Owner_;
}
//destructor
Vehicle::~Vehicle()
{

}
//accessors
std::string Vehicle::getManufacture()
{
	return manufacture_;
}
int Vehicle::getCylinders()
{
	return cylinders_;
}
Person Vehicle::getPerson()
{
	return Owner_;
}

//mutators
void Vehicle::setManufacture(std::string manu)
{
	manufacture_ = manu;
}
void Vehicle::setCylinders(int cyl)
{
	cylinders_ = cyl;
}
void Vehicle::setPerson(const Person& orig)
{
	Owner_ = orig;
}

