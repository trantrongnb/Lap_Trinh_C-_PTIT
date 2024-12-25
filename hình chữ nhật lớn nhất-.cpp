#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

void sml_left(int hs[], int m, int L[]) {
    stack<int> st;
    for (int i = m; i >= 1; i--) {
        while (!st.empty() && hs[i] < hs[st.top()]) {
            L[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        L[st.top()] = 0; 
        st.pop();
    }
}

void sml_right(int hs[], int m, int R[]) {
    stack<int> st;
    for (int i = 1; i <= m; i++) {
        while (!st.empty() && hs[i] < hs[st.top()]) {
            R[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        R[st.top()] = m + 1; 
        st.pop();
    }
}

void check() {
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    }
    int h[n + 1][m + 1];
    memset(h, 0, sizeof(h));
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            if (a[i][j] == 1) h[i][j] = h[i - 1][j] + 1;
            else h[i][j] = 0;
        }
    }
    int hs[m + 1];
    int L[m + 1], R[m + 1];
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            hs[j] = h[i][j];
        }
        sml_left(hs, m, L);
        sml_right(hs, m, R);
        for (int k = 1; k <= m; k++) {
            int w = R[k] - L[k] - 1;
            ans = max(ans, w * hs[k]);
        }
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        check();
    }
}
