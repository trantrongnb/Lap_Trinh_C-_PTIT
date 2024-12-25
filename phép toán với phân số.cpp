#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iomanip> 
using namespace std;
long long ucln(long long a,long long  b){
    if(b==0) return a;
    return ucln(b,a%b);
}
struct PhanSo{
    long long tu,mau;
};
void process(PhanSo A,PhanSo B){
    PhanSo C;
    C.tu=A.tu*B.mau+A.mau*B.tu;
    C.mau=A.mau*B.mau;
    long long tmp=ucln(C.tu,C.mau);
    C.tu/=tmp;
    C.mau/=tmp;
    cout<<C.tu*C.tu<<"/"<<C.mau*C.mau<<" ";
    PhanSo D;
    D.tu=A.tu*B.tu*C.tu*C.tu;
    D.mau=A.mau*B.mau*C.mau*C.mau;
    tmp=ucln(D.tu,D.mau);
    D.tu/=tmp;
    D.mau/=tmp;
    cout<<D.tu<<"/"<<D.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}