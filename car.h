#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include <string>
#include <iostream>

class Car
{
public:
    Car(std::string m, std::string mo, int yr, int odo):
        Make{m},
        Model{mo},
        Year{yr},
        Odometer{odo},
        LastOilChange{odo}
    {
        std::cout << "Creating a car:" << std::endl;
    }

    void display () const
    {
        std::cout << "\n\nMake: " << Make
                  << "\nModel: " << Model
                  << "\nYear: " << Year
                  << "\nOdometer: " << Odometer
                  << "\nLastOilChange: " << LastOilChange
                  << std::endl;
    }

    void set_year(int year)
    {
        Year = year;
    }

    void drive(int miles)
    {
        std::cout << "Driving " << miles << " miles...." << std::endl;
        Odometer = Odometer + miles;
        checkOil();
    }

    void checkOil ()
    {
        std::cout << "Checking if oil change is necessary: " << std::endl;
        int milesDriven = Odometer - LastOilChange;
        if (milesDriven >= 3000) {
            std::cout << "Oil has been changed!! " << std::endl;
            LastOilChange = Odometer;
        }
    }
private:
    std::string Make;
    std::string Model;
    int Year;
    int Odometer;
    int LastOilChange;
};

#endif // CAR_H_INCLUDED
