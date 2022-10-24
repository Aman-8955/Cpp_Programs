#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   fstream f;
   char taker[50];
   f.open("temp.txt",ios::out);
   cout<<f.tellg()<<endl;
   cout<<f.tellp()<<endl;
   f<<"Hello world";
   cout<<f.tellg()<<endl;
   cout<<f.tellp()<<endl;
   f.close();
   f.open("temp.txt",ios::in);
   cout<<f.tellg()<<endl;
   cout<<f.tellp()<<endl;
   f.seekg(6);
   f>>taker;
   cout<<f.tellg()<<endl;
   cout<<f.tellp()<<endl;
   cout<<taker;
    return 0;
}