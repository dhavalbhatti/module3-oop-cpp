#include <iostream>
using namespace std;

inline int square(int s)
{
    return s * s;
}

inline int cube(int s)
{
    return s * s * s;
}

int main()
{
    int side;
    cout << "Enter the value: ";
    cin >> side;
    cout << "The area of the square is: " << square(side) << endl;
    cout << "The volume of the cube is: " << cube(side) << endl;
}