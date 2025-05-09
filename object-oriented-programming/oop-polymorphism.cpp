// polymorphism - many forms

#include <iostream>
using namespace std;

class AbstractEmployee // Abstract class - class which has pure virtual function
{
    virtual void getPromotion() = 0; // pure virtual function - Pure virtual functions are used if a function doesn't have any use in the base class but the function must be implemented by all its derived classes
};
class Employee : AbstractEmployee
{
protected: // If it is private, then Developer class cannot access this. But if it protected, then derived class can access it.
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
    string getName() // Getter
    {
        cout << Name << endl;
        return Name;
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
            cout << Name << " " << "got promoted" << " " << endl;
        }
        else
        {
            cout << "Sorry " << Name << " " << "you didn't get promotion." << " " << endl;
        }
    }
    virtual void Work() // by writing virtual we are saying that if our derived classes have the implementation of Work function then execute the derived class function
    {
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;
    }
};

class Developer : public Employee // Developer (Child Class) is inheriting Employee class (Base class)
{
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug()
    {
        cout << Name << " " << "is fixing the bug using" << " " << FavProgrammingLanguage;
    }
    void Work()
    {
        cout << Name << " is writing code..." << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void prepareLesson()
    {
        cout << Name << "is preparing" << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work()
    {
        cout << Name << " is teaching..." << endl;
    }
};

int main() // The most common use of polymorphism is when a parent class reference is used to refer to a child class object
{
    Developer d = Developer("Avinash", "Koch", 24, "C++");
    d.fixBug();
    d.getPromotion();

    Teacher t = Teacher("Jack", "KV", 35, "Maths");
    t.prepareLesson();
    t.getPromotion();

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();
}