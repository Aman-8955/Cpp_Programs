#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter Your two numbers:- ";
    cin>>a>>b;
    try
    {
        if(b==0){
            throw 1;
        }
    }
    catch(int c)
    {
        cout<<"Here is a runtime error..";
        exit(0);
    }
    cout<<"a/b="<<a/b;
    return 0;
}