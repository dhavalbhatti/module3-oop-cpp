#include <iostream>
using namespace std;

class Add
{
public:
    Add(double a, double b)
    {
        cout << "Addition: " << a + b << endl;
    }
};

class Subtract
{
public:
    Subtract(double a, double b)
    {
        cout << "Subtraction: " << a - b << endl;
    }
};

class Multiply
{
public:
    Multiply(double a, double b)
    {
        cout << "Multiplication: " << a * b << endl;
    }
};

class Divide
{
public:
    Divide(double a, double b)
    {
        cout << "Division: " << a / b << endl;
    }
};

int main()
{
    double a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    Add obj1(a, b);
    Subtract obj2(a, b);
    Multiply obj3(a, b);
    Divide obj4(a, b);
    return 0;
}
