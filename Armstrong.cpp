#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, res = 0, conum;
    cout << "Enter your number:- ";
    cin >> num;
    conum = num;
    int tempnum = num, digit = 0;
    while (tempnum != 0)
    {
        tempnum = tempnum / 10;
        digit++;
    }
    while (num != 0)
    {
        tempnum = num % 10;
        res = res + pow(tempnum, digit);
        num = num / 10;
    }
    if (conum == res)
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;

    return 0;
}