#pragma once
#include "Transport.h"
class Truck : public Transport
{
	int loadCapacity;
public:
	Truck() :Truck("Truck", "Volvo", 90, 2, 20000) {}
	Truck(string t, string m, int s, int c, int load) :Transport(t, m, s, c), loadCapacity(load) {}
	void showInfo() {
		Transport::showInfo;
		cout << "Loadcapacity: " << loadCapacity << "kg" << endl;
	}

};

