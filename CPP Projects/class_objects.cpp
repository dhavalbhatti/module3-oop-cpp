#include<iostream>
using namespace std;

// class class_name
// {
// class is private by default
//     // methods and variables declared under public can be accessed from anywhere
//     // methods and variables declared under private can only be accessed from within the class
//     // methods and variables declared under protected can only be accessed from within the class and its child classes
    
//     public:   // 3 types of access specifiers: public, private, protected
//         int num1, num2;
//         // member functions are functions declared inside a class
//         void swap()
//         {
//             if (num1 >= num2)
//             {
//                 num1 = num2;
//             }
//             else if (num1 <= num2)
//             {
//                 num2 = num1;
//             }
//         }
// };

// int main()
// {
//     class_name object_name;
//     object_name.num1 = 10;
//       //  object_name.member function;

// }

class Person{
    public:
        void display()
        {
            cout<<"Hello World"<<endl;
        }
};

int main()
{
    Person obj;
    obj.display();
}