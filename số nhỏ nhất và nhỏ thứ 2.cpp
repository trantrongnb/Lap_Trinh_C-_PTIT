#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
void check(){
   int n,k;cin>>n;
   int a[n+1];
   set<int> se;
   for(int i=0;i<n;i++){
    cin>>a[i];
    se.insert(a[i]);
   }
   if(se.size()==1){
    cout<<-1<<endl;return;
   }
   set <int> ::iterator s=se.begin();
   cout<<*s<<" ";
   s++;
   cout<<*s<<endl; 
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}