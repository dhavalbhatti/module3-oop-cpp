#include<iostream>
using namespace std;
int main()
{
    double num1, num2;
    int choice;
    cout<<"Welcome to Switch Based Program.\n";
    cout<<"1. Addition \n";
    cout<<"2. Subtraction \n";
    cout<<"3. Division \n";
    cout<<"4. Multiplication \n";
    cout<<"5. Modulus \n";
    cout<<"Please select from (1-5) to start a program = ";
    cin>>choice;
    cout<<"Please enter Number1 = ";
    cin>>num1;
    cout<<"Please enter Number2 = ";
    cin>>num2;
    switch (choice)
    {
    case 1:
        cout<<"Sum of two numbers = "<<num1+num2<<endl;
        break;

    case 2:
        cout<<"Substraction of two numbers = "<<num1-num2<<endl;
        break;

    case 3:
        cout<<"Division of two numbers = "<<num1/num2<<endl;
        break;

    case 4:
        cout<<"Multiplication of two numbers = "<<num1*num2<<endl;
        break;

    case 5:
        cout<<"Modulus of two numbers = "<<(int)num1%(int)num2<<endl;
        break;
    
    default:
    cout<<"Invalid Choice! Please enter between 1 to 5 only."<<endl;
        break;
    }
    return 0;
}