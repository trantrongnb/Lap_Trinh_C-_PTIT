#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iomanip> 
#include<sstream>
using namespace std;
struct ql{
    int id;
    string ten,nhom;
    double mua,ban;
    double ln;
};

bool cmp(ql a,ql b){
    return a.ln>b.ln;
}
int main(){
    ql a[100];
    int n;cin>>n;
    for(int i=0;i<n;i++){
        getchar();
        a[i].id=i+1;
        getline(cin,a[i].ten);
        getline(cin,a[i].nhom);
        cin>>a[i].mua>>a[i].ban;
        a[i].ln=a[i].ban-a[i].mua;
    }
   stable_sort(a,a+n,cmp);
   for(int i=0;i<n;i++){
    cout<<a[i].id<<" "<<a[i].ten<<" "<<a[i].nhom<<" "<<fixed<<setprecision(2)<<a[i].ln<<endl;
   }
}