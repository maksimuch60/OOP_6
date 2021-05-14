#pragma once
#include <iostream>
using namespace std;

class TravelAgency
{
private:
	string ClientName;
	string Class;
	float Cost;
public:
	TravelAgency();
	void Set(string cName, string _class, float cost);
	friend ostream& operator<< (ostream& out, const TravelAgency& obj)
	{
		out << obj.ClientName << "\t" << obj.Class << "\t" << obj.Cost << endl;
		return out;
	}
};

