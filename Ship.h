#pragma once
#include "Transport.h"
class Ship : public Transport
{
	string homePort;
public:
    Ship() : Ship("Ship", "Titanic", 40, 3000, "Liverpul") {}

    Ship(string t, string m, int s, int c, string port)
        : Transport(t, m, s, c), homePort(port) {
    }

    void showInfo() {
        Transport::showInfo();
        cout << "HomePort : " << homePort << endl;
    }
};


