#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
struct Point{
    double x,y;
};
Point input( Point &A){
    cin>>A.x>>A.y;
    return A;
}
double distance(struct Point A,struct Point B){
    return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}
int main(){
    struct Point A,B;
    int t;cin>>t;
    while(t--){
        A=input(A);B=input(B);
        cout<<fixed<<setprecision(4)<<distance(A,B)<<endl;

    }
}