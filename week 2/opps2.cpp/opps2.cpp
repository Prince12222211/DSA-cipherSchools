#include <iostream>
#include <string>
using namespace std;

class SchoolBus
{
public:
    int number_tyres;
    string name;
    int capacity;
    int mileage; // Corrected the variable name
    string school_name; // Corrected the variable name
    int number_holidays;

public:
    void calculatemileage()
    {
        cout << "The mileage is " << mileage << endl;
    }

    void printnameofSchool()
    {
        cout << "The name of the school is " << school_name << endl;
    }
};

int main()
{
    SchoolBus bus; // Create an instance of the SchoolBus class

    // Set some values for the bus
    bus.number_tyres = 6;
    bus.name = "Yellow School Bus";
    bus.capacity = 60;
    bus.mileage = 8;
    bus.school_name = "Example School";
    bus.number_holidays = 10;

    bus.calculatemileage();
    bus.printnameofSchool();

    return 0;
}
