#include <iostream>
using namespace std;

// override polymorphism - it uses the same name as the class name with different parameters - run time polymorphism - Dynamic binding

class Human {
    public:
        void display(){
            cout << "I am a human" << endl;
        }
};

class Boy: public Human {
    public:
    void display(){
            cout << "I am a Boy" << endl;
        } 
};

int main (){
    Boy obj;
    obj.display();
    return 0;
}