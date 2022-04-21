#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
float sum(float a,float b){
    return a+b;
}
int main()
{
    cout<<endl<<"Sum of int value is "<<sum(2,3)<<endl
              <<"Sum of float value is "<<sum(2.5f,3.5f);
    return 0;
}