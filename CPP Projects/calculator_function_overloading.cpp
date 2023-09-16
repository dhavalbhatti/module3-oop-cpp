#include<iostream>
using namespace std;

class Calculator {
    public:
    void Result(int a, int b) {
        cout << "Original | Sum of " << a << " and " << b << " is " << a + b << endl;
        cout << "Original | Substraction of " << a << " and " << b << " is " << a - b << endl;
        cout << "Original | Multiplication of " << a << " and " << b << " is " << a * b << endl;
        cout << "Original | Division of " << a << " and " << b << " is " << a / b << endl;
    }
    void Result(double a, double b) {
        cout << "Overloading | Sum of " << a << " and " << b << " is " << a + b << endl;
        cout << "Overloading | Substraction of " << a << " and " << b << " is " << a - b << endl;
        cout << "Overloading | Multiplication of " << a << " and " << b << " is " << a * b << endl;
        cout << "Overloading | Division of " << a << " and " << b << " is " << a / b << endl;
    }
};

int main(){
    Calculator obj;
    obj.Result(5,7);
    obj.Result(10.3,20.5);
    return 0;
}