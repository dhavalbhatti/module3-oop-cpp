#include <iostream>
using namespace std;

class Matrix
{
public:
    int a;
    int b;

    Matrix(int c, int d)
    {
        a = c;
        b = d;
    }
    Matrix operator+(Matrix obj)
    {
        Matrix result(0, 0);
        result.a = a + obj.a;
        result.b = b + obj.b;
        return result;
        }

    void display()
    {
        cout << "Matrix addition = " << a << ", " << b << endl;
    }
};

int main()
{
    Matrix obj1(10, 20);
    Matrix obj2(30, 60);
    Matrix obj3(0, 0);
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}