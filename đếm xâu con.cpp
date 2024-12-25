#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
using namespace std;
void trong(){
    string s;int k;
    cin>>s>>k;
    int ans=0;
    int cnt[26];
    for(int i=0;i<s.size();i++){
        memset(cnt,0,sizeof(cnt));
        int curr=0;
        for(int j=i;j<s.size();j++){
            if(cnt[s[j]-'a']==0) curr++;
            cnt[s[j]-'a']++;
            if(curr==k){
                ans++;
            }
            if(curr>k) break;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        trong();
    }
}