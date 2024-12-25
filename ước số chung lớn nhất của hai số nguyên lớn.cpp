#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
ll ucln(ll a,ll b){
	if(b==0) return a;
	return ucln(b,a%b);
}
void check(){
	ll a;string b;
	cin>>a>>b;
	ll s=0;
	for(int i=0;i<b.size();i++){
		s=(s*10+b[i]-'0')%a;
	}
	cout<<ucln(a,s)<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		check();
	}
}