#include <iostream>
#include <string>
using namespace std;

class SchoolBus
{
private:
    int number_tyres;
    string name;
    int capacity;
    int mileage; // Corrected the variable name
    string school_name; // Corrected the variable name
    int number_holidays;

public:
    SchoolBus() // Constructor to initialize the object
    {
        number_tyres = 0;
        name = "Unknown";
        capacity = 0;
        mileage = 0;
        school_name = "Unknown";
        number_holidays = 0;
    }

    void setBusDetails(int tyres, const string &busName, int cap, int m, const string &schoolName, int holidays)
    {
        number_tyres = tyres;
        name = busName;
        capacity = cap;
        mileage = m;
        school_name = schoolName;
        number_holidays = holidays;
    }

    void calculatemileage()
    {
        cout << "The mileage is " << mileage << " miles per gallon." << endl;
    }

    void printnameofSchool()
    {
        cout << "The name of the school is " << school_name << "." << endl;
    }
};

int main()
{
    SchoolBus bus; // Create an instance of the SchoolBus class

    // Set some values for the bus
    bus.setBusDetails(6, "Yellow School Bus", 60, 8, "Example School", 10);

    bus.calculatemileage();
    bus.printnameofSchool();

    return 0;
}
