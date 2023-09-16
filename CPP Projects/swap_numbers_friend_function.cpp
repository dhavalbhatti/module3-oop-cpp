#include <iostream>
using namespace std;

class Original
{
private:
    int a, b;
    void get_numbers()
    {
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
    }
    void display_numbers()
    {
        cout << "Before swapping: " << endl;
        cout << "First number: " << a << endl;
        cout << "Second number: " << b << endl;
        swap(a, b);
    }

    void display_swapped_numbers()
    {
        cout << "After swapping: " << endl;
        cout << "First number: " << a << endl;
        cout << "Second number: " << b << endl;
    }

public:
    friend void swapped(Original obj);
};

void swapped(Original obj)
{
    obj.get_numbers();
    obj.display_numbers();
    obj.display_swapped_numbers();
}

int main()
{
    Original obj;
    swapped(obj);

    return 0;
}