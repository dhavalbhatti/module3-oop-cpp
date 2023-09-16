#include<iostream>
using namespace std;

// inheritance is a process of acquiring the properties of one class into another class
// the class which is inheriting the properties is called the child class

// single inheritance: one parent class and one child class

class Father{
    public:
        void displayFather()
        {
            cout<<"Hello World"<<endl;
        }
};

class Child: public Father{
    public:
        void displayChild()
        {
            cout<<"Hello World from Child"<<endl;
        }
};

int main (){
    Child obj;
    obj.displayFather();
    obj.displayChild();
}