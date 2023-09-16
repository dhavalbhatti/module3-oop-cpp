#include<iostream>
using namespace std;
int main()
{
    double num1, num2;
    cout<<"Please enter Number1 = ";
    cin>>num1;
    cout<<"Please enter Number2 = ";
    cin>>num2;
    cout<<"Sum of two numbers = "<<num1+num2<<endl;
    cout<<"Substraction of two numbers = "<<num1-num2<<endl;
    cout<<"Division of two numbers = "<<num1/num2<<endl;
    cout<<"Multiplication of two numbers = "<<num1*num2<<endl;
    cout<<"Modulus of two numbers = "<<(int)num1%(int)num2<<endl;
    return 0;
}