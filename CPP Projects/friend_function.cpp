#include<iostream>
using namespace std;

class base{
    private:
        int a;
        protected:
            int b;
        public:
         base(){
            a = 10;
            b = 20;
        }

        friend void display(base obj);
};

void display(base obj){
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
}

int main(){
    base obj;
    display(obj);
    return 0;
}