#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int n;
int a[100];
int ok;
void tao(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void sinh(){
    int i=n-1;
    while(a[i]>a[i+1]&&i>=1) i--;
    if(i==0) ok=0;
    else {
        for(int j=n;j>i;j--){
            if(a[j]>a[i]){
                swap(a[i],a[j]);
                break;
            }
        }
        sort(a+i+1,a+n+1);
    }
}
int main(){
    int t;cin>>t;
     while(t--){
        cin>>n;
        tao();
        ok=1;
        while(ok==1){
            for(int i=1;i<=n;i++) cout<<a[i];
            cout<<" ";
            sinh();
        }
        ok=1;
        cout<<endl;
     }
}