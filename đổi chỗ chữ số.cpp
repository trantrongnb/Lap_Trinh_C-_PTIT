#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long
int MAX=1e9+7;
using namespace std;
void check(){
    string s;cin>>s;
    int idx=s.size()-2;
    while(idx>=0&&s[idx]<=s[idx+1]) idx--;
    if(idx==-1){
        cout<<-1<<endl;return;
    }
    int phai=0;
    for(int i=s.size()-1;i>idx;i--){
        if(s[i]<s[idx]){
            phai=i;
            while(s[i]==s[phai]){
                phai=i;
                i--;
            }
            break;
        }
    }
    swap(s[idx],s[phai]);
    cout<<s<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}