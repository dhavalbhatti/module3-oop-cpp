#include<iostream>
using namespace std;

// inheritance is a process of acquiring the properties of one class into another class
// the class which is inheriting the properties is called the child class

// Multiple inheritance: one parent class and one child class and one grand child class

class grandFather{
    public:
        void displaygrandFather()
        {
            cout<<"Hello World from Grand Father"<<endl;
        }
};

class Father{
    public:
        void displayFather()
        {
            cout<<"Hello World from Father"<<endl;
        }
};

class Child: public Father, public grandFather{
    
       
};
    

int main (){
    Child obj;
    obj.displaygrandFather();
    obj.displayFather();
}