#include <iostream>
using namespace std;
class A{
   public:
      void fun(){
          cout<<"class A run";
      }
};
class B:public A{
   public:
     void fun(){
         cout<<"\nclass B run";
     }
};
int main()
{
    A oba;
    B obb;
    A *ptr;
    ptr=&oba;
    ptr->fun();
    ptr=&obb;
    ptr->fun();
    return 0;
}