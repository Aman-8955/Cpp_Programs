#include <iostream>
using namespace std;
void increament(int *funx){
++(*funx);
cout<<endl<<"Value of function x is "<<*funx;
}
void increament(int funy){
++funy;
cout<<endl<<"Value of function y is "<<funy;
}
int main()
{
    int x=5;
    cout<<endl<<"Call by reference:-"<<endl<<"Value of x is "<<x;
    increament(&x);
    cout<<endl<<"Value of main x is "<<x;
    int y=5;
    cout<<endl<<"Call by value:-"<<endl<<"Value of y is "<<y;
    increament(y);
    cout<<endl<<"Value of main y is "<<y;
    return 0;
}