#include <iostream>
using namespace std;
class A{
    static int num;
    public:
    void setVal(int x){
        num=x;
    }
    static void showVal(){
        cout<<endl<<"Value of num is "<<num;
    }
};
int A::num=0;
int main()
{
    A::showVal();
    A obj;
    obj.setVal(3);
    obj.showVal();
    A obj2;
    obj2.showVal();
    obj2.setVal(7);
    obj2.showVal();
    obj.showVal();
    return 0;
}