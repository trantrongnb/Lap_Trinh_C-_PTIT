#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
#include<utility>
using namespace std;
int check(string s){
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]) return 0;
        l++;r--;
    }
    return 1;
}
bool cmp(pair<string,int> p1,pair<string,int> p2){
    if(p1.first.size()==p2.first.size()) return p1.first>p2.first;
    return p1.first.size()>p2.first.size();
}
int main(){
    string s;
    vector<pair<string,int> > v;
    while(cin>>s){
        if(check(s)&&s.size()>1){
            int ok=0;
            for(auto &p:v){
                if(s==p.first){
                    p.second++;
                    ok=1;break;
                }
            }
            if(ok==0){
                v.push_back(make_pair(s,1));
            }
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(auto p:v){
        cout<<p.first<<" "<<p.second<<endl;
    }
}