#include <iostream>
using namespace std;
class A{
    public:
    virtual void print(){
        cout<<endl<<"A class function called";
    }
};
class B:public A{
    public:
    void print(){
        cout<<endl<<"B class function called";
    }
};
int main()
{
    A *ptr;
    A obja;
    B objb;
    ptr=&objb;
    ptr->print();
    ptr=&obja;
    ptr->print();
    return 0;
}