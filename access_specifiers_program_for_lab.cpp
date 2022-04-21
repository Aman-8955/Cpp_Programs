#include <iostream>
using namespace std;
class A{
    private:
       int a;
    protected:
       int b;
    public: 
      int c;
    void asetVal(){
      a=0;b=0;c=0;
    }
    void showVal(){
        cout<<endl<<"Values are "<<a<<" "<<b<<" "<<c;
    }
};
class B:public A{
    public:
      void bsetVal(){
    //   a=0; can't access
      b=1;c=1;
      }
};
int main()
{
    A ob1;
    // ob.a=1;ob.b=1; can't access
    ob1.asetVal();
    ob1.c=1;
    ob1.showVal();
    B ob2;
    ob2.asetVal();
    ob2.bsetVal();
    ob2.showVal();
    return 0;
}