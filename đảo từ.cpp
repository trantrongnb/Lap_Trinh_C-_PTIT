#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#include<sstream>
#include<vector>
#define ll long long
int main(){
    int t;cin>>t;scanf(" ");
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string token;
        vector<string> v;
        while(ss>>token){
            v.push_back(token);
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}