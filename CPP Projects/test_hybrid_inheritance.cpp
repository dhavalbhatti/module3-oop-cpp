#include<iostream>
using namespace std;

class A{
    public:
        void displayA()
        {
            cout<<"Hello World from A"<<endl;
        }
};

class B: public A{
    public:
        void displayB()
        {
            cout<<"Hello World from B"<<endl;
        }
};

class C {
    public:
        void displayC()
        {
            cout<<"Hello World from C"<<endl;
        }
};

class D: public B, public C{
    public:
        void displayD()
        {
            cout<<"Hello World from D"<<endl;
        }
};

int main (){
    D obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();
}