#include <iostream>
#include <vector>
using namespace std;
#include<set>
#include<map>
#include<algorithm>
void check() {
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1;
    while(l<=r){
        int mid=(r+l)/2;
        if(a[mid]==k){
            cout<<1<<endl;return;
        }
        if(a[mid]>k){
            r=mid-1;
        } else l=mid+1;
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
