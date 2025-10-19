#include <iostream>
using namespace std;
#pragma once
class Transport
{
protected:
	string type;
	string model;
	int speed;
	int capacity;
public:
	Transport():type("Unknown"), model("Unknown"), speed(0), capacity(0) {}
	Transport(string t, string m, int s, int c) :type(t), model(m), speed(s), capacity(c) {}

	void showInfo(){
		cout << "Type: " << type;
		cout << "Model : " << model;
		cout << "Speed: " << speed;
		cout << "Capacity: " << capacity;
	}
};

