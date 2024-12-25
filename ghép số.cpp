#include <iostream>
#include <vector>
using namespace std;
#include<algorithm>
void check() {
    int k, n;
    cin >> k >> n;
    int a[n*k];
    for(int i=0;i<n*k;i++) cin>>a[i];
    sort(a,a+n*k);
    for(int x:a) cout<<x<<" ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        check();
    }
}
