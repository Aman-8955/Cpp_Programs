#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, temp;
    cout << "enter the number=";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        sum = (sum * 10) + (n % 10);
        n = n / 10;
    }
    if (temp == sum)
        cout << "palindrome number";
    else
        cout << "not palindrome";
    return 0;
}