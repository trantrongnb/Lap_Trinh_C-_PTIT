#include<stack>
#include<iostream>
#include<algorithm>
#include<set>
#include<cstring>
using namespace std;
#include<vector>
#include<iostream>
long long check(){
	int m,n;cin>>m>>n;
	string s;cin>>s;
	int len=s.size();
	long long dp[len][n];
	memset(dp,0,sizeof(dp));
	dp[0][(s[0]-'0')%n]++;
	for(int i=1;i<len;i++){
		dp[i][(s[i]-'0')%n]++;
		for(int j=0;j<n;j++){
			dp[i][j]+=dp[i-1][j];
			dp[i][(j*10+(s[i]-'0'))%n]+=dp[i-1][j];
		}
	}
	return dp[len-1][0];
}
int main(){
	int t;cin>>t;
	while(t--){
		cout<<check()<<endl;
	}
}