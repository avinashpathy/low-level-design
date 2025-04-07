#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string color;
    int year;

    void printDetails()
    {
        cout << brand << " " << color << endl;
    }
};

int main()
{
    Car c;
    c.brand = "Ferrari";
    c.color = "Red";
    c.printDetails();
}