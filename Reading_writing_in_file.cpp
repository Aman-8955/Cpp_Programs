#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fobj;
    char data[50];
    cout<<"Enter your data here:-";
    cin.getline(data,50);
    fobj.open("data.dat",ios::out);
    fobj<<data;
    cout<<endl<<"Data writing is done...";
    fobj.close();
    fobj.open("data.dat",ios::in);
    fobj.getline(data,50);
    cout<<endl<<"Your Data:-"<<data;
    fobj.close();
    return 0;
}