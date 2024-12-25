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
    int n;cin>>n;
    int dem=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2==0) dem++;
            if(i*i!=n){
                if((n/i)%2==0) dem++;
            }
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