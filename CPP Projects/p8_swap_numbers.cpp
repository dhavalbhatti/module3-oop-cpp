#include<iostream>
using namespace std;
int main()
{
    double num1, num2;
    cout<<"Please enter the 1st Number = ";
    cin>>num1;
    cout<<"Please enter the 2nd Number = ";
    cin>>num2;
        cout<<"Before Swapping the Numbers are = "<<num1<<" and "<<num2<<endl;

    if (num1 >= num2)
    {
        num1 = num2;
    }
    else if (num1 <= num2)
    {
        num2 = num1;
    }
    
    
    cout<<"After Swapping the Numbers are = "<<num1<<" and "<<num2<<endl;
}