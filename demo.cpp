#include <bits/stdc++.h>
using namespace std;

void reverseRow(vector<int> &row, int n)
{
    int temp;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        temp = row[i];
        row[i] = row[j];
        row[j] = temp;
        i++;
        j--;
    }
}

void rotateMatrix(vector<vector<int>> &matrix, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverseRow(matrix[i], n);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}