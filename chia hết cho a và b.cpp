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
using namespace std;
map<int,int> mp;
void check(){
    int dem=0;
    int m,n,a,b;cin>>m>>n>>a>>b;
    for(int i=m;i<=n;i++){
        if((i%a==0)&&(i%b==0)) dem++;
        else {
            if(i%a==0) dem++;
            if(i%b==0) dem++;
        }
    }
    cout<<dem<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}