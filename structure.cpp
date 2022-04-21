#include <iostream>
using namespace std;
struct Student
{
    int class_number;
    char name[20];
    int roll_number;
};

int main()
{   struct Student s1;
    cout<<endl<<"Enter values(roll number,name,class) of student:- \n";
    cin>>s1.roll_number>>s1.name>>s1.class_number;
    cout<<endl<<"Student Values:- "<<endl
              <<"Roll number: "<<s1.roll_number<<endl
              <<"Name: "<<s1.name<<endl
              <<"Class: "<<s1.class_number;
    return 0;
}