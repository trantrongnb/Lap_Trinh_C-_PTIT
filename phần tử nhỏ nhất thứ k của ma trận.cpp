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
            int n,k;cin>>n>>k;
            int a[n*n];
            for(int i=0;i<n*n;i++) cin>>a[i];
            sort(a,a+n*n);
            //for(int i=0;i<n*n;i++) cout<<a[i]<<" ";
           // cout<<endl;
            cout<<a[k-1]<<endl;
    }
}