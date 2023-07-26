#include <iostream>
#include <vector>

using namespace std;

void mark(vector<vector<char>>& matrix, int n, int m, int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m || matrix[x][y] != '.') {
        return;
    }

    // Mark current cell as visited
    matrix[x][y] = '2';

    // Make recursive call in all 4 adjacent directions
    mark(matrix, n,m, x + 1, y); // DOWN
    mark(matrix,n,m, x, y + 1); // RIGHT
    mark(matrix,n,m, x - 1, y); // TOP
    mark(matrix,n,m, x, y - 1); // LEFT
}

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int clusters = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (matrix[i][j] == '.') {
                mark(matrix, n, m, i, j);
                clusters++;
            }


        }
    }

    cout << clusters << endl;
}
