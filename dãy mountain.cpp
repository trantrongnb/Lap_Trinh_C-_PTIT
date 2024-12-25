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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l,r;cin>>l>>r;
        int ok=1;
        for(int i=l;i<r;i++){
            if(a[i]>a[i+1]&&i<r){
                for(int j=i;j<r;j++){
                    if(a[j]<a[j+1]&&j<r){
                        ok=0;break;
                    }
                }
                break;
            }
        }
        if(ok==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}