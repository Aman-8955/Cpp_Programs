#include <iostream>
using namespace std;
class peoples{
   int number=6;
   friend void frfun(peoples &);
   public:
   void print();
};
void peoples::print(){
    cout<<endl<<"number= "<<number;
}
void frfun(peoples &tempob){
    tempob.number=8;
}
int main()
{
    peoples ob;
    frfun(ob);
    ob.print();
    return 0;
}