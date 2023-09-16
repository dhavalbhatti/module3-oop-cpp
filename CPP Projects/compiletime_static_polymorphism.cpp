#include <iostream>
using namespace std;

// polymorphism - it uses the same name as the class name with different parameters - compile time polymorphism - Static binding - Overloading
// overloading - same function name with different parameters

class Add
{
public:
    void Sum(int a, int b)
    {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
    void Sum(double a, double b)
    {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

int main ()
{
    Add obj;
    obj.Sum(10, 20);
    obj.Sum(10.3, 20.5);
    return 0;
}