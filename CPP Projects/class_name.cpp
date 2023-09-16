#include<iostream>
using namespace std;

class Person{
    int age; // actual private variables
    string name;
    public:
        void setAge(int a)  // parameters to pass values to the class
        {
            age = a;
        }
        void setName(string n)
        {
            name = n;
        }
        int getAge()
        {
            return age;
        }
        string getName()
        {
            return name;
        }
};

int main(){
    Person obj;
    obj.setAge(36);
    obj.setName("Dhaval");
    cout<<"Name = "<<obj.getName()<<endl;
    cout<<"Age = "<<obj.getAge()<<endl;
}