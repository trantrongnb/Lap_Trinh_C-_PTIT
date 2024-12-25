#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
class ql{
    private :
    string ma,ten,lop,email;
    public:
    friend istream &operator >>(istream &is,ql &a){
        getline(is,a.ma);
        getline(is,a.ten);
        getline(is,a.lop);
        getline(is,a.email);
        return is;
    }
    friend ostream &operator <<(ostream &os,ql a){
        os<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
        return os;
    }
    friend bool cmp(ql a,ql b);
};
bool cmp(ql a,ql b){
    return a.ma<b.ma;
}
int main(){
    vector<ql> v;
    ql x;
    while(cin>>x){
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++) cout<<v[i];
}