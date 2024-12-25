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
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}
int check(int n){
    set<int> se;
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int c=0;
            while(n%i==0){
                dem++;
                if(se.find(i)!=se.end()) return 0;
                else se.insert(i);
                if(dem>3) return 0;
                n/=i;
            }
        }
    }
    if(n!=1){
        if(se.find(n)!=se.end()) return 0;
        else dem++;
    }
        if(dem==3) return 1;
        return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(check(n)) cout<<1<<endl;
        else cout<<0<<endl;
    }
}