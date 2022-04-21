#include <iostream>
using namespace std;
int main()
{
    int firstM, firstN, secondM, secondN, i, j;
    cout << "Enter your First matrix order(mxn):- ";
    cin >> firstM >> firstN;
    cout << "Enter your Second matrix order(mxn):- ";
    cin >> secondM >> secondN;
    if (firstN != secondM)
    {
        cout << "These matrix multiplication is not possible.....";
        exit(0);
    }
    int mat1[firstM][firstN], mat2[secondM][secondN];
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < firstN; j++)
        {
            cout << "Enter your " << i << j << " element of first matrix:-";
            cin >> mat1[i][j];
        }
    }
    cout << "Your Entered matrix one is as following:-\n\n";
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < firstN; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << "\n\n";
    }

    for (i = 0; i < secondM; i++)
    {
        for (j = 0; j < secondN; j++)
        {
            cout << "Enter your " << i << j << " element of secound matrix:-";
            cin >> mat2[i][j];
        }
    }
    // Printing second matrix values
    cout << "Your Entered matrix two is as following:-\n\n";
    for (i = 0; i < secondM; i++)
    {
        for (j = 0; j < secondN; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << "\n\n";
    }

    cout << "Your Multiplication of matrix is as following:-\n\n";
    // Main Multiplication logic
    int resultmat[firstM][secondN], k, temp, addtemp = 0;
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < secondN; j++, addtemp = 0)
        {
            for (k = 0; k < secondN; k++)
            {
                temp = mat1[i][k] * mat2[k][j];
                addtemp += temp;
            }
            resultmat[i][j] = addtemp;
        }
    }
    // Printing resulted matrix
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < secondN; j++)
        {
            cout << resultmat[i][j] << " ";
        }
        cout << "\n\n";
    }

    return 0;
}