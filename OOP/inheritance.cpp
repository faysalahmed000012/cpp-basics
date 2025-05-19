#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "I eat food." << endl;
    }
};

class Mammal
{
public:
    void breathe()
    {
        cout << "I breathe air." << endl;
    }
};

// Multiple Inheritance
class Dog : public Animal, public Mammal
{
public:
    void bark()
    {
        cout << "Gheu Gheu" << endl;
    }
};

// Multi Level Inheritance
class Person
{
public:
    void speak()
    {
        cout << "Hi, I am Cappuccino Assasino" << endl;
    }
};

class Employee : public Person
{
public:
    void work()
    {
        cout << "Ami kamla Khati." << endl;
    }
};

class Manager : public Employee
{
public:
    void manage()
    {
        cout << "Ami kamla khatai." << endl;
    }
};

int main()
{
    cout << endl
         << "Multipel Inheritance" << endl;
    Dog dog;
    dog.eat();     // Inherited from Animal
    dog.breathe(); // Inherited from Mammal
    dog.bark();    // Dog's own method

    cout << endl
         << "Multi Level Inheritance" << endl;
    Manager manager;
    manager.speak();  // Inherited from Person
    manager.work();   // Inherited from Employee
    manager.manage(); // Manager's own method

    return 0;
}