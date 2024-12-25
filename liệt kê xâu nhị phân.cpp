#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#define ll long long
int n,a[100];
int ok;
void tao(){
    for(int i=1;i<=n;i++) a[i]=0;
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;i--;
    }
    if(i==0) ok=0;
    else {
        a[i]=1;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        ok=1;
        tao();
        while(ok==1){
            for(int i=1;i<=n;i++) cout<<a[i];
            sinh();
            cout<<" ";
        }
        cout<<endl;
    }
}