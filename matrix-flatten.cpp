#include <bits/stdc++.h>
using namespace std;


int main()
{

    // Matrix dimensions (n x m x p).
    int n = 2;
    int m = 3;
    int p = 4;

    // Dummy data for the 3d matrix.
    int matrix[2][3][4] = 
    { 
        { 
            {3, 4, 2, 3}, 
            {0, -3, 9, 11}, 
            {23, 12, 23, 2} 
            },
        { 
            {13, 4, 56, 3}, 
            {5, 9, 3, 5}, 
            {5, 1, 4, 9} 
            }
    };



    // 1 dimension vector.
    int q = n*m*p;
    int vect[q] = {0};

    
    // Loop through all value in the matrix.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < p; k++)
            {   
                int index = (i * m * p) + (j * p) + k;  // Equation to map index of 3d arr to 1d arr.
                int data = matrix[i][j][k];

                vect[index] = data;
            } 
        }
    }
    
    // Display values of the 1d vector.
    for (int y = 0; y < q; y++)
    {
        cout << vect[y] << " ";
    }


    return 0;


}