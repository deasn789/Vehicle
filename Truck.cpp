#include "Truck.h"

//constructors
Truck::Truck()
{
	loadCapacityTons_ = 0;
	towingCapacityPounds_ = 0;
}
Truck::Truck(double loadCap, int towCap)
{
	loadCapacityTons_ = loadCap;
	towingCapacityPounds_ = towCap;
}
Truck::Truck(const Truck& orig)
{
	loadCapacityTons_ = orig.loadCapacityTons_;
	towingCapacityPounds_ = orig.towingCapacityPounds_;
}
//destructor
Truck::~Truck()
{

}
//accessors
double Truck::getLoadCapTons()
{
	return loadCapacityTons_;
}
int Truck::getTwoCapPds()
{
	return towingCapacityPounds_;
}
//setters
void Truck::setLoadCapTons(double loadCap)
{
	loadCapacityTons_ = loadCap;
}
void Truck::setTowCapPds(int towCap)
{
	towingCapacityPounds_ = towCap;
}