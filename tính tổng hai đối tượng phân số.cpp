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
    friend istream& operator >>(istream &is,PhanSo &p){
        is>>p.tu>>p.mau;
        return is;
    }
    friend ostream& operator <<(ostream &os,PhanSo p){
        os<<p.tu<<"/"<<p.mau<<endl;
        return os;
    }

    PhanSo operator +(PhanSo p){
        PhanSo ans(1,1);
        ans.tu=this->tu*p.mau+this->mau*p.tu;
        ans.mau=this->mau*p.mau;
        ll tmp=ucln(ans.tu,ans.mau);
        ans.tu=ans.tu/tmp;
        ans.mau=ans.mau/tmp;
        return ans;
    }
};
int main(){
    PhanSo p(1,1), q(1,1);
    cin>>p>>q;
    cout<<p+q;
    return 0;
}