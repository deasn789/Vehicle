#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
	name_ = "default";
}
Person::Person(string theName)
{
	name_ = theName;
}
Person::Person(const Person& theObject)
{
	this->name_ = theObject.name_;
}
string Person::getName() const
{
	return name_;
}
Person& Person::operator=(const Person& rt_side)
{
	this->name_ = rt_side.name_;
	return *this;
}
std::istream& operator >> (std::istream& inStream, Person& personObject)
{
	inStream >> personObject.name_;
	return inStream;
}
std::ostream& operator << (std::ostream& outStream, const Person& personObject)
{
	outStream << personObject.name_;
	return outStream;
}