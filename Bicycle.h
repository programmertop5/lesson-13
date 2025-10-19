#pragma once
#include "Transport.h"
class Bicycle : public Transport
{
	bool hasBell;
public:
	Bicycle() : Bicycle("Bicycle", "Giant", 25, 1, true) {}

    Bicycle(string t, string m, int s, int c, bool bell)
        : Transport(t, m, s, c), hasBell(bell) {
    }

    void showInfo() {
        Transport::showInfo();
        cout << "Bell: " << (hasBell ? "yes" : "no") << endl;
    }
};


