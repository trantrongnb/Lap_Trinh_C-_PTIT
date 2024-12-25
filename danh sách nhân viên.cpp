#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#define ll long long
struct NhanVien {
    int id;
    string ten, gt, ns, dc, mst, ngay;
};
void nhap(NhanVien &a){
    scanf(" ");
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.mst);
    getline(cin, a.ngay);
}
void inds(NhanVien ds[],int N){
    for(int i=0;i<N;i++){
        if(i+1<10)
        cout<<"0000"<<i+1<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].mst<<" "<<ds[i].ngay<<endl;
        else cout<<"000"<<i+1<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].mst<<" "<<ds[i].ngay<<endl;
    }  
}
int main() {
   struct  NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}