#include <iostream>
using namespace std;

// Access Modifier - Public, Protected, Private
// Everything inside class in C++ is private by default

// Constructor - Default Constructor, Parameterized Constructor
// Constructor -  Same name as class, Has no return type

// Encapsulation - Bundling data and methods together into a single unit and preventing other classes to directly access them
// Using Getters and Setters methods which can be used to access the data

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void setName(string name) // Setter
    {
        Name = name;
    }
    void getName() // Getter
    {
        cout << Name << endl;
    }
    void IntroduceYourself()
    {
        cout << Name << " " << Company << " " << Age << endl;
    }
};

int main()
{
    Employee emp1 = Employee("Avinash", "Koch", 24);
    // emp1.Name = "Avinash";
    // emp1.Company = "Koch";
    // emp1.Age = 24;
    emp1.setName("Alok");
    emp1.getName();
    emp1.IntroduceYourself();
    // Employee emp2 = Employee("John", "Google", 24); // Parameterized Constructor
    // emp2.IntroduceYourself();
    // emp2.Name = "John";
    // emp2.Company = "Amazon";
    // emp2.Age = 24;
    // emp2.IntroduceYourself(); // o/p -   76732688  (default constructor) constructor with default values -  we didn't provide any values
}