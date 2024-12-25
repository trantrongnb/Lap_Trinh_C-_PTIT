#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void nhan(string x,string y){
	int len1=x.size(),len2=y.size();
	vector<int> a,b;
	for(int i=0;i<len1;i++) a.push_back(x[i]-'0');
	for(int i=0;i<len2;i++) b.push_back(y[i]-'0');
	vector<vector<int> > v(len2);
	int index=0;
	for(int i=len2-1;i>=0;i--){
		int k=0;
		while(k<index){
			v[index].push_back(0);
			k++;
		}
		int sum=0,nho=0;
		for(int j=len1-1;j>=0;j--){
			sum=b[i]*a[j]+nho;
			v[index].push_back(sum%10);
			nho=sum/10;
		}
		if(nho>0) v[index].push_back(nho);
		while(v[index].size()<len1+len2) v[index].push_back(0);
		reverse(v[index].begin(),v[index].end());
		index++;
	}
	int nho=0;
	string ans="";
	for(int j=v[0].size()-1;j>=0;j--){
		int sum=nho;
		for(int i=0;i<v.size();i++){
			sum+=v[i][j];
		}
		ans=char(sum%10+'0')+ans;
		nho=sum/10;
	}
	if(nho>0) ans=char(nho+'0')+ans;
	while(ans[0]=='0') ans.erase(0,1);
	cout<<ans<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		nhan(x,y);
	}
}