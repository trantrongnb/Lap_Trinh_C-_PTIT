#include<iostream>
#include<set>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;
void check(){
    vector<int> v;
    int n;
    int chan=0,le=0;
    while(cin>>n){
        if(n%2==0) chan++;
        else le++;
        v.push_back(n);
    }
    if(v.size()%2==0){
        if(chan>le) cout<<"YES"<<endl;
        return;
    } else {
        if(le>chan) cout<<"YES"<<endl;
    }
    cout<<"NO"<<endl;
}
int main(){
    int t ;cin>>t;
    map<char,int> mp;
    while(t--){
        check();
    }
}