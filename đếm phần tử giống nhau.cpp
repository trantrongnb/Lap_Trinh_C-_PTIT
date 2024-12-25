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
#include<iostream>
#include<string>
#include<iomanip>
#include <iostream>
int MAX=1e9+7;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
          int n;cin>>n;
          int a[n+1][n+1];
          map<int,int> mp;
          for(int i=1;i<=n;i++){
            set<int> se;
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                se.insert(a[i][j]);
            }
            for(auto x:se) mp[x]++;
          }
          int dem=0;
          for(auto p:mp){
            if(p.second==n) dem++;
          }
          cout<<dem<<endl;
    }
}