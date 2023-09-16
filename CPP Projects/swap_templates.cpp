
#include <iostream>
using namespace std;

template <class T>
int swap_numbers(T &x, T &y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    swap_numbers(a, b);
    cout << "After swapping: " << endl;
    cout << a << " " << b << endl;
    return 0;
}
