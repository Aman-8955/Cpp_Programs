#include <iostream>
using namespace std;
class Sample{
    public:
    Sample(){
        cout<<endl<<"In the sample constructor block";
    }
    ~Sample(){
        cout<<endl<<"In the sample destructor block";
    }
};
void fun(){
    cout<<endl<<"In the fun function block";
    Sample obj;
}
int main()
{
    cout<<endl<<"In the main block";
    fun();
    cout<<endl<<"In the main block";
    return 0;
}