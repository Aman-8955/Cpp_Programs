#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fobj;
    char content[50];
    fobj.open("a.txt", ios::in);
    fobj.getline(content,100);
    fobj.close();
    fobj.open("b.txt", ios::out);
    fobj << content;
    fobj.close();
    cout<<endl<<"Done...";
    return 0;
}