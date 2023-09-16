#include <iostream>
using namespace std;

class Max
{
private:
    int a, b, c;
    void get_numbers()
    {
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << "Enter the third number: ";
        cin >> c;
    }
    void max_number()
    {
        if (a > b && a > c)
        {
            cout << "The maximum number is: " << a << endl;
        }
        else if (b > a && b > c)
        {
            cout << "The maximum number is: " << b << endl;
        }
        else
        {
            cout << "The maximum number is: " << c << endl;
        }
    }

public:
    friend void max(Max obj);
};

void max(Max obj)
{
    obj.get_numbers();
    obj.max_number();
}

int main()
{
    Max obj;
    max(obj);

    return 0;
}