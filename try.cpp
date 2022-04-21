#include <iostream>
using namespace std;
int main()
{
    int firstM, firstN, secondM, secondN, i, j;
    cout << "Enter your First matrix order(mxn):- \n";
    cin >> firstM >> firstN;
    cout << "Enter your Second matrix order(mxn):- \n";
    cin >> secondM >> secondN;
    if (firstN != secondM)
    {
        cout << "These matrix multiplication is not possible.....";
        exit(0);
    }
    int mat1[firstM][firstN], mat2[secondM][secondN];
    cout << "Enter your first matrix:-\n";
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < firstN; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter your secound matrix:-\n";
    for (i = 0; i < secondM; i++)
    {
        for (j = 0; j < secondN; j++)
        {
            cin >> mat2[i][j];
        }
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