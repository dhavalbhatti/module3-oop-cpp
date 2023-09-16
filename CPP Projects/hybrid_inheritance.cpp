#include <iostream>
using namespace std;

// inheritance is a process of acquiring the properties of one class into another class
// the class which is inheriting the properties is called the child class

// Hybrid inheritance:

class grandFather
{
public:
    void displaygrandFather()
    {
        cout << "Hello World from Grand Father" << endl;
    }
};

class Father : public grandFather
{
public:
    void displayFather()
    {
        cout << "Hello World from Father" << endl;
    }
};

class indFather
{
public:
    void displayindFather()
    {
        cout << "Hello World from indFather" << endl;
    }
};

class Child : public Father, public indFather
{
public:
    void displayChild()
    {
        cout << "Hello World from Child" << endl;
    }
};

int main()
{

    Child obj2;
    obj2.displaygrandFather();
    obj2.displayFather();
    obj2.displayindFather();
    obj2.displayChild();
    
}