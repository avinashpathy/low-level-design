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
