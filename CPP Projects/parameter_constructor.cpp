#include <iostream>
using namespace std;

// parameterized constructor - it uses the same name as the class name with parameters

class Add
{
public:
    Add(int a, int b)
    {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Add obj(a, b); // constructor is called automatically when the object is created
    return 0;
}