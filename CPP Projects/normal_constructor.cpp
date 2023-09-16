#include <iostream>
using namespace std;

// normal constructor - it uses the same name as the class name

class A{
    public:
        A(){
            cout<<"Hello World from A"<<endl;
        }
};

int main()
{
    A obj; // constructor is called automatically when the object is created
}