// Step 1: Basics of C++
// Syntax, variables, data types

// Input/output (cin, cout)

// Control structures: if-else, loops

// Functions and function overloading

// Arrays and strings
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int age = 25;
    float weight = 70.5;
    char grade = 'A';
    bool isPassed = true;
    cout << add(1, 3) << endl;
    cout << add(1, 2, 3) << endl;
    cout << "Learning OOP" << endl;
    return 0;
};
