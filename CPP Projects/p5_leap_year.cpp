#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Please enter the Year = ";
    cin>>num1;
    if((int)num1%4==0)
    {
        cout<<"This is a leap year"<<endl;
    }
    else
    {
        cout<<"This is not a leap year"<<endl;
    }
    
    return 0;
}