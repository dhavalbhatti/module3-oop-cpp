#include <iostream>
using namespace std;

// inheritance is a process of acquiring the properties of one class into another class
// the class which is inheriting the properties is called the child class

// Heirarchical inheritance: one parent class and Multiple child classes

class grandFather
{
public:
    void sum(double a, double b)
    {
        cout << "Sum is: " << a + b << endl;
    }
};

class Child3 : public grandFather
{
public:
    void mul(double a, double b)
    {
        cout << "Mul is: " << a * b << endl;
    }
};

class Child : public grandFather
{
public:
    void div(double a, double b)
    {
        cout << "Div is: " << a / b << endl;
    }
};

class Child2 : public grandFather
{
public:
    void sub(double a, double b)
    {
        cout << "Sub is: " << a - b << endl;
    }
};

int main()
{
    Child3 obj;
    obj.sum(10, 20);
    obj.mul(10, 20);
    Child obj2;
    obj2.sum(10, 20);
    obj2.div(10, 20);
    Child2 obj3;
    obj3.sum(10, 20);
    obj3.sub(10, 20);
}