#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int n=a.size();
		for(int i=0;i<a.size()-2;i++){
		    if(a=="") break;
			if(i>=0&&a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='0'){
				a.erase(a.begin()+i,a.begin()+i+3);
				i-=2;
			}
		}
		if(n-a.size()==0) cout<<endl;
        else cout<<n-a.size()<<endl;
	}
}