#include<iostream>
using namespace std;

class Area {
    public:
    void Result(int a, int b) {
        cout << "Area of Rectangle: " << a * b << endl;
    }
    void Result(double a, double b) {
        cout << "Area of Triangle: " << 0.5 * a * b << endl;
    }
    void Result(double a) {
        cout << "Area of Circle: " << 3.14 * a * a << endl;
    }
};

int main(){
    Area obj;
    obj.Result(5,7);
    obj.Result(10.3,20.5);
    obj.Result(6.78);
    return 0;
}