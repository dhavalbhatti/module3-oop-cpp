#include <iostream>
using namespace std;

// Abstruct class - Virtual function
//

class abstructclass
{
public:
    virtual void Result(int a, int b) = 0; // Pure virtual function - Abstruct class
};

class B : public abstructclass
{
public:
    void Result(int a, int b)
    {
        cout << "Original | Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

class C : public abstructclass
{
public:
    void Result(int a, int b)
    {
        cout << "Overloading | Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};

int main()
{
    C obj;
    B obj1;
    obj.Result(5, 7);
    obj1.Result(3, 9);
    abstructclass *ptr = &obj; // Pointer of abstruct class can point to the object of derived class
    ptr->Result(8, 33);
    return 0;
}