#include <iostream>
using namespace std;
class trial{
    public:
      void fun(){
          cout<<"Run";
      }
};
int main()
{
    trial *p=new trial;
    p->fun();
    return 0;
}