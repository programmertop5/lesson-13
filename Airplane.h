#pragma once
#include "Transport.h"
class Airplane : public Transport
{
	int flightRange;
public:
	Airplane() : Airplane("Airplane", "Boeing", 850, 180, 5000) {}
	Airplane(string t, string m, int s, int c, int f) :Transport(t, m, s, c), flightRange(f) {}
};

