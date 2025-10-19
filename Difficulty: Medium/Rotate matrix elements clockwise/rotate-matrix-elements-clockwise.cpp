// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int m, int n, vector<vector<int>> mat) {
        // code here
        int row = 0, col = 0;
    int prev, curr;

    while (row < m && col < n) {

        // If only one row or one column is left, stop rotation
        if (row + 1 == m || col + 1 == n)
            break;

        // Store the first element of next row, this element will replace first element of current row
        prev = mat[row + 1][col];

        // Move elements of top row from the remaining rows
        for (int i = col; i < n; i++) {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;

        // Move elements of the last column
        for (int i = row; i < m; i++) {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;

        // Move elements of the bottom row
        if (row < m) {
            for (int i = n - 1; i >= col; i--) {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;

        // Move elements of the first column
        if (col < n) {
            for (int i = m - 1; i >= row; i--) {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }

    return mat;
    }
};