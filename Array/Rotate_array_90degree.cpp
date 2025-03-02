
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows;
//     int columns;
//     cout << "enter no.of rows:" << endl;
//     cin >> rows;
//     cout << "enter no. of columns:" << endl;
//     cin >> columns;
//     int matrix[rows][columns];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << "enter value " << i << " " << j << endl;
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // performing transpose in the same matrix itself
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = i + 1; j < columns; j++)
//         {
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         }
//     }
//     // now reversing each row
//     for (int i = 0; i < rows; i++)
//     {
//         int start = 0, end = columns - 1;
//         while (start < end)
//         {
//             int temp = matrix[i][start];
//             matrix[i][start] = matrix[i][end];
//             matrix[i][end] = temp;
//             start++;
//             end--;
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Create a new matrix to store rotated values
    vector<vector<int>> rotated(cols, vector<int>(rows));

    // Rotate the matrix (90 degrees clockwise)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            rotated[j][rows - 1 - i] = matrix[i][j];
        }
    }

    // Copy rotated matrix back to original matrix
    matrix = rotated;
}

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    // Rotate the matrix
    rotateMatrix(matrix);

    cout << "\nRotated Matrix (90 degrees clockwise):\n";
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
