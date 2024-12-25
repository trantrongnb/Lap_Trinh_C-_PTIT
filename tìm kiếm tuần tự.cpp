#include <iostream>
#include <vector>
using namespace std;
#include<set>
#include<map>
#include<algorithm>
void check() {
    int n,k;cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        if(a[i]==k){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        check();
    }
}
