#include <iostream>
using namespace std;

class Add{
    public:
        Add(){
            cout << "Constructor called" << endl;
        }
        ~Add(){ // destructor is called automatically when the object is destroyed
            cout << "Destructor called" << endl;
        }
};

int main(){
   
    Add obj; // constructor is called automatically when the object is created
    return 0;
}