#include <iostream>
using namespace std;
class A{
    public:
       void afun(){
           cout<<"In the A class";
       }
};
class B1:public A{
    public:
       void b1fun(){
           cout<<"In the B1 class";
       }
};
class B2:public A{
    public:
       void b2fun(){
           cout<<"In the B2 class";
       }
};
class C:public B1,public B2{
    public:
       void b2fun(){
           cout<<"In the C class";
       }
};
int main()
{
    C ob;
    ob.afun();
    return 0;
}