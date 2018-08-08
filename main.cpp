#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car vehicle("Chevrolet", "Malibu", 1972, 100000);
    vehicle.display();
    vehicle.drive(50);
    vehicle.display();
    vehicle.drive(3000);
    vehicle.set_year(1975);
    vehicle.display();
    return 0;
}
