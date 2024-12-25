#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;
ll ucln(ll a,ll b){
    if(b==0) return a;
    return ucln(b,a%b);
}
class PhanSo{
    private:
    ll tu,mau;
    public:
     PhanSo(ll tu,ll mau){
        this->tu=tu;
        this->mau=mau;
    }
    friend istream& operator >>(istream& is,PhanSo &p){
        is>>p.tu>>p.mau;
        return is;
    }
    friend ostream& operator <<(ostream& os,PhanSo p){
        os<<p.tu<<"/"<<p.mau<<endl;
        return os;
    }
    void rutgon(){
        ll tmp=ucln(tu,mau);
        tu=tu/tmp;
        mau=mau/tmp;
    }
};
int main(){
    PhanSo p(1,1);
    cin>>p;
    p.rutgon();
    cout<<p;
    return 0;
}