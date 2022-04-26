#include <iostream>
using namespace std;
class A{
    public:
    virtual void print()=0;
};
class B:public A{
    public:
    void print(){
        cout<<endl<<"B class function called";
    }
};
class C:public B{
    public:
    void print(){
        cout<<endl<<"C class function called";
    }
};
int main()
{
    // A obj; You can't make an object of abstract class
    B *ptr;
    B objb;
    C objc;
    ptr=&objb;
    ptr->print();
    ptr=&objc;
    ptr->print();
    return 0;
}