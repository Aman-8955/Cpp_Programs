#include <iostream>
using namespace std;
int fect(int n){
    if (n==0)
    {
        return 1;
    }
    else{
        return n*fect(n-1);
    }
}
int main()
{
    int num;
    cout<<"Enter your number:- ";
    cin>>num;
    for (int i = 0; i <= num; i++)
    {
        for (int j = num-i; j > 0; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<fect(i)/(fect(j)*fect(i-j))<<" ";
        }
        cout<<endl;        
    }
    // for (int i = num-1; i >=1; i--)
    // {
    //     for (int j = num-i; j > 0; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;        
    // }    
    return 0;
}