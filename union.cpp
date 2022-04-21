#include <iostream>
using namespace std;
union Student
{
    int class_number;
    char name[20];
    int roll_number;
};

int main()
{
    union Student s1;
    cout << endl
         << "Enter values(roll number,name,class) of student:- \n";
    cin >> s1.roll_number;
    cout << "Roll number: " << s1.roll_number<<endl;
    cin >> s1.name;
    cout << "Name: " << s1.name<<endl;
    cin >> s1.class_number;
    cout << "Class: " << s1.class_number;
    return 0;
}