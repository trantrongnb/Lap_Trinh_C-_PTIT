#include<iostream>
#include<string>
#include<math.h>
using namespace std;
typedef long long ll;
struct edge{
	double x,y;
};
void check(){
	int n,m;
	cin>>n>>m;
	int a[201][201];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	ll sum[201][201];
	sum[0][0]=0;
	for(int i=1;i<=n;i++) sum[i][0]=0;
	for(int i=1;i<=m;i++) sum[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
		}
	}
	ll maxx=-1e9;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=i;k<=n;k++){
				for(int h=j;h<=m;h++){
					maxx=max(maxx,sum[k][h]-sum[k][j-1]-sum[i-1][h]+sum[i-1][j-1]);
				}
			}
		}
	}
	cout<<maxx<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		check();
	}
}