#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
struct ThiSinh{
    string ten,ns;
    float a,b,c;
};
void nhap(ThiSinh &A){
    getline(cin,A.ten);
    cin>>A.ns;
    cin>>A.a>>A.b>>A.c;
    getchar();
}
void in(ThiSinh A){
    cout<<A.ten<<" "<<A.ns<<" "<<fixed<<setprecision(1)<<A.a+A.b+A.c;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}