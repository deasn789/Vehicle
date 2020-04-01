#pragma once
#include "Person.h"
#include "Vehicle.h"

// Derrived class of Vehicle
class Truck : public Vehicle
{
public:
	//constructors
	Truck();
	Truck(double, int);
	Truck(const Truck& orig);
	//destructor
	~Truck();
	//accessors
	double getLoadCapTons();
	int getTwoCapPds();
	//setters
	void setLoadCapTons(double);
	void setTowCapPds(int);

private:
	double loadCapacityTons_;
	int towingCapacityPounds_;
};