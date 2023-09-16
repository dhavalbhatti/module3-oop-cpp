#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b)
    {
        return a + b;
    }
    double subtract(double a, double b)
    {
        return a - b;
    }
    double multiply(double a, double b)
    {
        return a * b;
    }
    double divide(double a, double b)
    {
        return a / b;
    }
};

int main()
{
    Calculator obj;
    double a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "Addition: " << obj.add(a, b) << endl;
    cout << "Subtraction: " << obj.subtract(a, b) << endl;
    cout << "Multiplication: " << obj.multiply(a, b) << endl;
    cout << "Division: " << obj.divide(a, b) << endl;
    return 0;
}