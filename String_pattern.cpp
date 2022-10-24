#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your string:- ";
    getline(cin,str);
    int length=str.length();
    for(int i=0;i<=length;i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<str[j];
        }
        cout<<endl;
        
    }
    for(int i=0;i<length;i++)
    {
        for (int j = i; j < length; j++)
        {
            cout<<str[j];
        }
        cout<<endl;
        
    }
    return 0;
}