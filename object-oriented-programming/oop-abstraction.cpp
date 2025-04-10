#include <iostream>
using namespace std;

// Access Modifier - Public, Protected, Private
// Everything inside class in C++ is private by default

// Constructor - Default Constructor, Parameterized Constructor
// Constructor -  Same name as class, Has no return type

// Encapsulation - Bundling data and methods together into a single unit and preventing other classes to directly access them
// Using Getters and Setters methods which can be used to access the data

// Abstraction -  Hiding complex things and showing only the necessary things to the user

// virtual function - A virtual function is a member function in the base class that we expect to redefine in derived classes.

class AbstractEmployee // Abstract class - class which has pure virtual function
{
    virtual void getPromotion() = 0; // pure virtual function - Pure virtual functions are used if a function doesn't have any use in the base class but the function must be implemented by all its derived classes
};
class Employee : AbstractEmployee
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

    void setAge(int age) // Setter
    {
        if (Age >= 18)
        {
            Age = age;
        }
    }
    void getAge() // Getter
    {
        cout << Age << endl;
    }
    void IntroduceYourself()
    {
        cout << Name << " " << Company << " " << Age << endl;
    }
    void getPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " " << "got promoted" << " ";
        }
        else
        {
            cout << "Sorry " << Name << " " << "you didn't get promotion." << " ";
        }
    }
};

int main()
{
    Employee emp1 = Employee("Avinash", "Koch", 24);
    Employee emp2 = Employee("Shavinash", "Dock", 35);
    emp1.getPromotion();
    emp2.getPromotion();
    // emp1.Name = "Avinash";
    // emp1.Company = "Koch";
    // emp1.Age = 24;
    // emp1.setName("Alok");
    // emp1.getName();
    // emp1.IntroduceYourself();
    // Employee emp2 = Employee("John", "Google", 24); // Parameterized Constructor
    // emp2.IntroduceYourself();
    // emp2.Name = "John";
    // emp2.Company = "Amazon";
    // emp2.Age = 24;
    // emp2.IntroduceYourself(); // o/p -   76732688  (default constructor) constructor with default values -  we didn't provide any values
}