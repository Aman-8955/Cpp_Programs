#include <iostream>
using namespace std;
class A{
   class B{
       public:
          void fun(){
              cout<<"In the B class block..";
          }
   };
   public:
   B obj;
   
};
int main()
{
    A mainobj;
    mainobj.obj.fun();
    return 0;
}