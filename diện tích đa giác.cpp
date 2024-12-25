#include<iostream>
#include<string>
#include<math.h>
using namespace std;
typedef long long ll;
struct edge{
	double x,y;
};
void check(){
	edge a[1001];
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
	}
	double ans=a[0].x*a[1].y-a[1].x*a[0].y;
	for(int i=2;i<n;i++){
		ans=ans+(a[i-1].x*a[i].y-a[i-1].y*a[i].x);
	}
	ans=ans+(a[n-1].x*a[0].y-a[n-1].y*a[0].x);
	ans=1.0/2.0*abs(ans);
	printf("%.3lf",ans);
	cout<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		check();
	}
}