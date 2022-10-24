#include <iostream>
using namespace std;
template <class x> x increment(x val){
    ++val;
return val;
}
int main()
{
    cout<<increment(6);
    return 0;
}