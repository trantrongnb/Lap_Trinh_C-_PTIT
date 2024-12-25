#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
using namespace std;
class TG{
    private:
    int gio,phut,giay;
    public:
    friend istream &operator >>(istream &is,TG &a){
        is>>a.gio>>a.phut>>a.giay;
        return is;
    }
    friend ostream &operator <<(ostream &os,TG a){
    os<<a.gio<<" "<<a.phut<<" "<<a.giay<<endl;
    return os;
    }
    friend bool cmp(TG a,TG b);
};
bool cmp(TG a,TG b){
    int t1=a.gio*3600+a.phut*60+a.giay;
    int t2=b.gio*3600+b.phut*60+b.giay;
    return t1<t2;
}
int main(){
    int n;cin>>n;
    TG time[n];
    for(int i=0;i<n;i++) cin>>time[i];
    sort(time,time+n,cmp);
    for(int i=0;i<n;i++) cout<<time[i];
}
