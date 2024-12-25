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
ll ucln(int a,int b){
    if(b==0) return a;
    return ucln(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
        ll a,x,y;cin>>a>>x>>y;
        ll tt=ucln(x,y);
        for(int i=1;i<=tt;i++) cout<<a;
        cout<<endl;
    }
}