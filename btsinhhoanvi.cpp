#include<iostream>
#include<vector>
using namespace std;
int n,k;
int a[100];
int ok=1;
void tao(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void sinh(){
   int i=n-1;
   while(a[i]>a[i+1]&&i>=1) i--;
   if(i==0) ok=0;
   else{
    for(int j=n;j>i;j--){
        if(a[j]>a[i]){
            swap(a[i],a[j]);
            break;
        }
    }
    int l=i+1,r=n;
    while(l<=r){
        swap(a[l++],a[r--]);
    }
   }
}
int main(){
    cin>>n>>k;
    tao();
    while(ok==1){
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<endl;
        sinh();
    }
}