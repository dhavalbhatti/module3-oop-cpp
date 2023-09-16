#include <iostream>
using namespace std;

class Person
{
public:
    void display(string name,
                 int age)
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    void percentage(double percentage)
    {
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person
{
public:
    void salary(double salary)
    {
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student obj1;
    Teacher obj2;
    cout << "Student Details: " << endl;
    obj1.display("Dhaval Bhatti", 36);
    obj1.percentage(99.99);
    cout << "Teacher Details: " << endl;
    obj2.display("Darshan Gada", 24);
    obj2.salary(100000.00);
}