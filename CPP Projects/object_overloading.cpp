#include<iostream>
using namespace std;

class Object{
    private:
        int a;
        int b;
    public:
        Object(int c, int d){
            a = c;
            b = d;
        }
            
        Object operator+(Object obj){
            Object result(0,0);
            result.a = a + obj.a;
            result.b = b + obj.b;
            return result;
        }

        void display(){
            cout<<"Object addition = "<<a<< ", " <<b<<endl;
        
        }
       
};

int main(){
    Object obj1(10,20);
    Object obj2(30,40);
    Object obj3(0,0);
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}