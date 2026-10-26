#include <bits/stdc++.h>

using namespace std;

int main()

{
    int count = 0;
    int row, col;
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    while (row < 2)
    {
        row++;
        count++;
    }
    while (row > 2)
    {
        row--;
        count++;
    }
    while (col < 2)
    {
        col++;
        count++;
    }
    while (col > 2)
    {
        col--;
        count++;
    }
    cout << count << endl;

    return 0;
}