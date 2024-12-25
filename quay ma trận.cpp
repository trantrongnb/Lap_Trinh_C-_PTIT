#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int a[m][n];
            for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        int m1 = m, n1 = n;
        int row = 0, col = 0;
        int prev, curr;
        while (row < m && col < n) {
            if (row + 1 == m || col + 1 == n) break;
            prev = a[row + 1][col];
            for (int i = col; i < n; i++) {
                curr = a[row][i];
                a[row][i] = prev;
                prev = curr;
            }
            row++;
            for (int i = row; i < m; i++) {
                curr = a[i][n - 1];
                a[i][n - 1] = prev;
                prev = curr;
            }
            n--;
            if (row < m) {
                for (int i = n - 1; i >= col; i--) {
                    curr = a[m - 1][i];
                    a[m - 1][i] = prev;
                    prev = curr;
                }
            }
            m--;
            if (col < n) {
                for (int i = m - 1; i >= row; i--) {
                    curr = a[i][col];
                    a[i][col] = prev;
                    prev = curr;
                }
            }
            col++;
        }
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n1; j++) cout << a[i][j] << " ";
        }
        cout<<endl;
    }
}
