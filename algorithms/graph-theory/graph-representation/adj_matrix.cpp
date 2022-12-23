#include <bits/stdc++.h>
using namespace std;

/*

0---->1
     / \
    /   \
   2-----3


Time Complexity: O(n^2)
Space Complexity: O(n^2)

 */

int main()
{
    int nodes = 4;

    int matrix[nodes][nodes] = {}; // O(n^2) - T & S

    // O(E)
    matrix[0][1] = 1;
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[1][3] = 1;
    matrix[3][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
