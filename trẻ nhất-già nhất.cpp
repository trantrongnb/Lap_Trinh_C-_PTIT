#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
using namespace std;
struct sv{
    string ten,ns;
};
void nhap(sv a[],int n ){
    for(int i=0;i<n;i++){
       cin>>a[i].ten>>a[i].ns;
    }
}
string chuan(string s){
    stringstream ss(s);
    string token;
    string ans;
    vector<string> v;
    while(getline(ss,token,'/')){
        v.push_back(token);
    }
    ans+=v[2];
    ans+=v[1];
    ans+=v[0];
    return ans;
}
bool cmp(sv a,sv b){
    return chuan(a.ns)<chuan(b.ns);
}
void in(sv a[],int n){
    cout<<a[n-1].ten<<endl<<a[0].ten<<endl;
}
int main(){
    sv a[101];
    int n;cin>>n;
    cin.ignore();
    nhap(a,n);
    sort(a,a+n,cmp);
    in(a,n);
}