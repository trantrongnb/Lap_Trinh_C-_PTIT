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
void tinh(){
string x,y;
cin>>x>>y;
string res="";
while(x.size()<y.size()) x="0"+x;
while(x.size()>y.size()) y="0"+y;
for(int i=x.size()-1;i>0;i--){
   if(x[i]+y[i]-2*'0'<10) res=char(x[i]+y[i]-'0')+res;
   else {
    res=char(x[i]+y[i]-10-'0')+res;
    x[i-1]++;
   }
}
   if(x[0]+y[0]-2*'0'<10) res=char(x[0]+y[0]-'0')+res;
   else {
    res=char(x[0]+y[0]-10-'0') +res;
    res="1"+res;
   }
    cout<<res<<endl;
}
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        tinh();
    }
}