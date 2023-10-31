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
    SchoolBus(int tyres, const string &busName, int cap, int m, const string &schoolName, int holidays)
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
    SchoolBus myBus(6, "Yellow School Bus", 60, 8, "Example School", 10);
    myBus.calculatemileage();
    myBus.printnameofSchool();

    return 0;
}
