#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    int roll_no;
    void get_student_info()
    {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll_no;
    }
    void display_student_info()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

class Test: public Student
{
public:
    int marks1, marks2;
    void get_test_marks()
    {
        cout << "Enter the marks of the first test: ";
        cin >> marks1;
        cout << "Enter the marks of the second test: ";
        cin >> marks2;
    }
    void display_test_marks()
    {
        cout << "Marks of the first test: " << marks1 << endl;
        cout << "Marks of the second test: " << marks2 << endl;
    }
};

class Result : public Test
{
public:
    void display_result()
    {
        display_student_info();
    }
    void display_total_marks()
    {
        cout << "Total marks: " << marks1 + marks2 << endl;
    }
};

int main()
{
    Result obj;
    obj.get_student_info();
    obj.get_test_marks();
    cout << "Student Scorecard: " << endl;
    obj.display_result();
    obj.display_test_marks();
    obj.display_total_marks();
    return 0;
}