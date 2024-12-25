#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<utility>
vector<string> luu;
int check(int n){
    int nho1=0,nho2=0;
    while(n!=0){
        if((n%10)%2==0) nho1++;
        else nho2++;
        n/=10;
    }
    return nho1==nho2;
}
void solve(){
    for(int i=10;i<=1000000;i++){
        if(check(i)==1) luu.push_back(to_string(i));
    }
}
int main(){
    solve();
    int dem=0;
    int n;cin>>n;
    for(int i=0;i<luu.size();i++){
        if(luu[i].size()==n){
            dem++;
            cout<<luu[i]<<" ";
        }
        if(dem==10){
            cout<<endl;
            dem=0;
        }
    }
}