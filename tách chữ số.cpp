#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string al;
        long long sum=0;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) al+=s[i];
            else sum=sum+s[i]-'0';
        }
        sort(al.begin(),al.end());
        cout<<al<<sum<<endl;
    }
}