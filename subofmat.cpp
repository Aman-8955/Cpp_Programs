#include <iostream>
using namespace std;
int main()
{
    int num, i, j, mat1[10][10], mat2[10][10];
    cout << "Enter your matrix order:- ";
    cin >> num;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            cout << "Enter your " << i << j << " enlement of first matrix:-";
            cin >> mat1[i][j];
        }
    }
    cout << "Your Entered matrix one is as following:-\n\n";
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {

            cout << mat1[i][j]<<" ";
        }
        cout << "\n\n";
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            cout << "Enter your " << i << j << " enlement of secound matrix:-";
            cin >> mat2[i][j];
        }
    }
    cout << "Your Entered matrix two is as following:-\n\n";
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {

            cout << mat2[i][j]<<" ";
        }
        cout << "\n\n";
    }

    cout << "Your Subtraction of matrix is as following:-\n\n";
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {

            cout << mat1[i][j] - mat2[i][j] << " ";
        }
        cout << "\n\n";
    }
    return 0;
}