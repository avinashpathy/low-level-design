## What is OOP?

- Object-Oriented Programming (OOP) is a programming paradigm based on the concept of “objects”, which can contain:

- Data in the form of fields (also called attributes or properties)

- Code in the form of methods (also called functions or behaviors)

- C++ is both a procedural and object-oriented language — perfect for transitioning into OOP.

## Goals of OOP

- Modularity: Break program into smaller chunks
- Reusability: Write once, use many times

- Scalability: Add more features with ease

- Maintainability: Easier to fix and upgrade

- Abstraction: Hide complexity

- Encapsulation: Wrap data and behavior into one unit (class)

Four Pillars of OOP

- Encapsulation: Bundling data and functions that operate on the data.

- Abstraction: Hiding complex implementation details.

- Inheritance: Acquiring properties and behaviors from another class.

- Polymorphism: Many forms — functions behave differently based on input/context.

## Basic OOP Terms

| Term            | Description                              |
| --------------- | ---------------------------------------- |
| **Class**       | Blueprint for creating objects           |
| **Object**      | Instance of a class                      |
| **Attribute**   | Data inside a class (a.k.a. data member) |
| **Method**      | Function inside a class                  |
| **Constructor** | Special method to initialize an object   |
| **Destructor**  | Cleans up when object goes out of scope  |

## Why OOP over Procedural Programming?

### Procedural Example:

```cpp
int speed = 80;
void accelerate() {
    speed += 10;
}
```

- This exposes speed to outside code, which can be modified recklessly.
  There are no rules or restrictions — anyone can change it anytime.

## OOP Encapsulation Example:

```
class Car {
private:
    int speed;

public:
    Car() { speed = 0; }

    void accelerate() { speed += 10; }
    int getSpeed() { return speed; }
};
```

Here, speed is protected and can only be modified via class methods —
this is encapsulation, one of the core principles of OOP.

## Real-World Analogy

Class = Blueprint of a House \
Object = Actual house built from that blueprint \
Each house has:\

- Properties: color, rooms
- Actions: openDoor(), lockDoor()

## Classes and Objects

- A class is a blueprint or template for creating objects. It defines:

  - Attributes (data members)
  - Behaviors (member functions/methods)

- An object is an instance of a class. It occupies memory and can access the attributes and behaviors defined in the class.

## Access Specifier

## 🔐 Access Specifiers in C++

| Specifier   | Description                                 |
| ----------- | ------------------------------------------- |
| `public`    | Accessible from anywhere                    |
| `private`   | Accessible only within the class            |
| `protected` | Accessible in the class and derived classes |

```
class Sample {
private:
    int secret = 42;

public:
    int getSecret() {
        return secret;
    }
};
```

## Constructors and Destructors

- Constructor:
  - Special function with the same name as the class
  - Automatically called when an object is created
  - Used to initialize data members

<b> Types of Constructors: </b>

- Default Constructor
- Parameterized Constructor
- Copy Constructor


1. Default Constructor
 - A default constructor is a constructor that takes no arguments.
It's automatically provided by the compiler if no other constructor is defined, or you can define it yourself.

```
#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    // Default Constructor
    Car() {
        brand = "Unknown";
        cout << "Default constructor called!" << endl;
    }

    void display() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car c1;          // Default constructor is called
    c1.display();    // Output: Brand: Unknown
}
```

2. Parameterized Constructor
 - A parameterized constructor is used to initialize objects with specific values at the time of creation.

 ```
 #include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Parameterized Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car c2("Tesla", 2023); // Parameterized constructor is called
    c2.display();          // Output: Brand: Tesla, Year: 2023
}
```
3. Copy Constructor
 - A copy constructor is used to create a new object as a copy of an existing object.

 ```
 #include <iostream>
using namespace std;

class Book {
public:
    string title;

    // Parameterized constructor
    Book(string t) {
        title = t;
    }

    // Copy Constructor
    Book(const Book &b) {
        title = b.title;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book b1("C++ Mastery");  // Original object
    Book b2 = b1;            // Copy constructor is called
    b2.display();            // Output: Title: C++ Mastery
}
```

# Types of Constructors in C++

| Constructor Type | Purpose                                   | Example Usage              |
|------------------|-------------------------------------------|----------------------------|
| Default          | Initialize object with default values     | `Car c1;`                 |
| Parameterized    | Initialize object with custom values      | `Car c2("BMW", 2024);`    |
| Copy             | Create a new object by copying another    | `Book b2 = b1;`           |


## Difference Between Copy Constructor and Parameterized Constructor

### Comparison: Copy Constructor vs Parameterized Constructor

| Aspect        | Copy Constructor                                      | Parameterized Constructor                             |
|---------------|-------------------------------------------------------|-----------------------------------------------------|
| **Purpose**   | Used to create a new object as a copy of an existing object. | Used to initialize an object with specific/custom values. |
| **Parameter** | Takes a reference to an object of the same class (`const ClassName &obj`). | Takes any custom arguments needed for initialization. |
| **Invocation**| Automatically invoked by the compiler in certain situations. | Explicitly invoked by the programmer when creating the object. |
| **Example**   | `ClassName obj2 = obj1;`                              | `ClassName obj(value1, value2);`                    |


```
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

    // Default Constructor
    Book() {
        title = "Untitled";
        author = "Unknown";
    }

    // Parameterized Constructor
    Book(string t, string a) {
        title = t;
        author = a;
    }

    // Copy Constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book book1("C++ Guide", "John Doe"); // Parameterized constructor
    book1.display();

    Book book2 = book1; // Copy constructor
    book2.display();

    return 0;
}
```

### Why the Copy Constructor Is Not a Parameterized Constructor

### 1. Automatic Invocation:
- **Copy Constructor:**
  - Automatically invoked when creating a new object from an existing object.
  - Example: 
    ```cpp
    Book book2 = book1; // Copy constructor is called
    ```
- **Parameterized Constructor:**
  - Requires explicit values provided by the programmer during object creation.
  - Example: 
    ```cpp
    Book book("C++ Primer", 2025); // Parameterized constructor is called
    ```

---

### 2️. Special Parameter:
- **Copy Constructor:**
  - Takes a reference to an object of the same
  - Example:
    ```cpp
    Book(const Book &b); // Signature of copy constructor
    ```
- **Parameterized Constructor:**
  - Can accept any type of parameter (e.g., `string`, `int`).
  - Example:
    ```cpp
    Book(string title, int year); // Signature of parameterized constructor
    ```

---

### 3️. Special Use Case:
- **Copy Constructor:**
  - Designed specifically for object duplication.
  - Use Case:
    ```cpp
    Book book2 = book1; // Duplicate book1 into book2
    ```
- **Parameterized Constructor:**
  - Used for initializing an object with custom values.
  - Use Case:
    ```cpp
    Book book("The Art of C++", 2024); // Initialize with specific values
    ```

- A copy constructor is a specialized constructor designed to copy the properties of an existing object, whereas a parameterized constructor is more general-purpose for initialization.

## Destructor

- Called automatically when an object goes out of scope
- Used to clean up resources

```
class Car {
public:
    ~Car() {
        cout << "Car destroyed" << endl;
    }
};
```

### Member Functions Inside & Outside the Class

```
class Student {
public:
    string name;

    // Declared inside class
    void display();

    // Constructor
    Student(string n) {
        name = n;
    }
};

// Defined outside the class
void Student::display() {
    cout << "Name: " << name << endl;
}
```

### Object Arrays

```
class Fruit {
public:
    string name;
    Fruit(string n) { name = n; }
};

int main() {
    Fruit fruits[2] = { Fruit("Apple"), Fruit("Banana") };
    cout << fruits[0].name << endl;
}
```

# Encapsulation

 - Encapsulation is the process of wrapping data (attributes) and methods (functions) into a single unit (class) while restricting direct access to some components. It ensures that the internal implementation is hidden and provides controlled access to the data through public methods.

Key Concepts of Encapsulation:
- Access Modifiers (private, protected, public) to control data access.
- Getter and Setter methods to read and update private attributes.
- Data Hiding ensures the internal state of an object is protected from unauthorized access.

Why is Encapsulation Important?
- Data Security: Prevents unauthorized access or modifications.
- Maintainability: Makes the code modular and easier to manage.
- Flexibility: Allows changes to the internal implementation without affecting other parts of the program.

How to Achieve Encapsulation in C++
- Use private access specifier to make data members inaccessible directly.
- Provide public getter and setter methods to access and modify private data.

```
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Setter for accountHolder
    void setAccountHolder(string name) {
        accountHolder = name;
    }

    // Getter for accountHolder
    string getAccountHolder() {
        return accountHolder;
    }

    // Setter for balance
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        } else {
            cout << "Invalid balance!" << endl;
        }
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    // Set values using setters
    account.setAccountHolder("Alice");
    account.setBalance(5000);

    // Access values using getters
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Balance: $" << account.getBalance() << endl;

    return 0;
}
```

---


| **Concept**          | **Example Use Case**                            |
|-----------------------|------------------------------------------------|
| **Access Modifiers**  | `private`, `protected`, `public`               |
| **Getters and Setters** | `setAccountHolder`, `getBalance`              |
| **Data Hiding**       | Prevent direct access to attributes            |
| **Constructors**      | Initialize private attributes                  |

---

## Friend Functions and Friend Classes

- In C++, a friend function or friend class is granted special access to the private and protected members of another class. Unlike regular functions, friend functions bypass encapsulation for the specific class that declares them as a friend.

### Friend Function:

- A function that is not a member of the class but has access to its private and protected members.
- Declared in the class definition using the keyword friend.

### Friend Class:

- A class that can access the private and protected members of another class.
- Entire class is declared as a friend using the friend keyword.

When to Use:

- For operations involving two or more classes where tight coupling is needed.
- For debugging or logging sensitive class data without exposing it to the public.

```
#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Declaring friend function
    friend double getWidth(const Box &b);
};

// Definition of friend function
double getWidth(const Box &b) {
    return b.width; // Accessing private member
}

int main() {
    Box b(5.5);
    cout << "Width of the box: " << getWidth(b) << endl; // Friend function can access private member
    return 0;
}
```

```
#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    // Declaring Car as a friend class
    friend class Car;
};

class Car {
public:
    void displayEngineDetails(const Engine &e) {
        // Accessing private member of Engine
        cout << "Engine Horsepower: " << e.horsepower << endl;
    }
};

int main() {
    Engine engine(300);
    Car car;
    car.displayEngineDetails(engine); // Friend class accessing private member
    return 0;
}
```

