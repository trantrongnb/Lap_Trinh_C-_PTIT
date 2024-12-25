#include<iostream>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<vector>
#include<string>
#include<cstring>
#include<map>
using namespace std;
typedef long long ll;
int main(){
    map<int,int> mp;
    vector<int> v;
    int x;
    while(cin>>x){
        v.push_back(x);
        mp[x]++;
    }
    for(int i=0;i<v.size();i++){
        if(mp[v[i]]!=0){
            cout<<v[i]<<" "<<mp[v[i]]<<endl;
            mp[v[i]]=0;
        }
    }
}