#include <iostream>
using namespace std;

class BankAccount
{
public:
    string name;
    int account_number;
    string account_type;
    double balance;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount obj;
    obj.name = "Dhaval Bhatti";
    obj.account_number = 123456789;
    obj.account_type = "Current";
    obj.balance = 4000000000.00;
    obj.display();
    return 0;
}