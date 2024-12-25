#include <iostream>
#include <vector>
using namespace std;
#include<set>
#include<map>
#include<algorithm>
void check() {
    int n;cin>>n;
    int a[n];
    set<int> se;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    sort(a,a+n);
    int tt=a[n-1]-a[0]+1;
    cout<<tt-se.size();
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        check();
    }
}
