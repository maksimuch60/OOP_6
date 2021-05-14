#include "TravelAgency.h"

TravelAgency::TravelAgency()
{

}

void TravelAgency::Set(string cName, string _class, float cost)
{
	this->ClientName = cName;
	this->Class = _class; 
	this->Cost = cost;
}
