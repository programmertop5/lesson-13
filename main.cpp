#include <iostream>
#include "Transport.h"
#include "Bicycle.h"
#include "Airplane.h"
#include "Ship.h"
#include "Truck.h"
using namespace std;
int main() {
        Bicycle b;
        Truck tr;
        Airplane a;
        Ship s;

        cout << "------------Bicycle --------------\n";
        b.showInfo();

        cout << "\n-------- Truck ----------\n";
        tr.showInfo();

        cout << "\n--------- Airplane ----------\n";
        a.showInfo();

        cout << "\n---------- Ship -----------\n";
        s.showInfo();

        return 0;
}
