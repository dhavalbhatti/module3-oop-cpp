#include<iostream>
using namespace std;
int main()
{
    double num1, num2;
    cout<<"Please enter the Years = ";
    cin>>num1;
    cout<<"Please enter the Days = ";
    cin>>num2;
    cout<<"Total Days for the enter years are = "<<num1*365<<endl;
    cout<<"Total Years for the enter days are = "<<num2/365<<endl;
    return 0;
}