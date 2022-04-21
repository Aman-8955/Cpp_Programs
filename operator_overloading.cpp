#include <iostream>
using namespace std;
class Increment{
    int x;
    public:
    Increment(){}
    Increment(int temp){
        x=temp;
    }
    void operator ++(){
        x++;
    }
    void showVal(){
        cout<<endl<<"Value of x is "<<x;
    }
};
int main()
{
    Increment obj;
    obj=10;
    obj.showVal();
    ++obj;
    obj.showVal();
    return 0;
}