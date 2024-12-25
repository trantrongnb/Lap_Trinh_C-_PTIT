#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int sum_curr = 0;
        for (int i = 0; i < k; i++) sum_curr += a[i];
        int max_sum = sum_curr;
        int pos = 0;
        for (int i = k; i < n; i++) {
            sum_curr += a[i] - a[i - k];
            if (sum_curr > max_sum) {
                max_sum = sum_curr;
                pos = i - k + 1;
            }
        }
        for (int i = pos; i < pos + k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
