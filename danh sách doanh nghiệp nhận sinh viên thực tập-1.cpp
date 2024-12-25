#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
class dn{
    private:
    string ma,ten;
    int sl;
    public:
    friend istream& operator >>(istream& is,dn &a){
        getchar();
        getline(is,a.ma);
        getline(is,a.ten);
        is>>a.sl;
        return is;
    }
    friend ostream& operator <<(ostream&os,dn a){
        os<<a.ma<<" "<<a.ten<<" "<<a.sl<<endl;
        return os;
    }
    friend bool cmp(dn a,dn b);
};
bool cmp(dn a,dn b){
    if(a.sl==b.sl) return a.ma<b.ma;
    return a.sl>b.sl;
}
int main(){
    int n;cin>>n;
    dn a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) cout<<a[i];
}