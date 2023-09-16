#include<iostream>
using namespace std;
int main()
{
    double num1, num2, num3, result;
    cout<<"Please enter the Principle amount = ";
    cin>>num1;
    cout<<"Please enter the Rate of Interest = ";
    cin>>num2;
    cout<<"Please enter the Time Duration = ";
    cin>>num3;
    result = (num1*num2*num3)/100;
    cout<<"Simple interest = "<<result<<endl;
    return 0;
}