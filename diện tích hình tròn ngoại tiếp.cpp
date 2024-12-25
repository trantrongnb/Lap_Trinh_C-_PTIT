#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define PI 3.141592653589793238
struct HT {
    double a, b, c;
};
bool kt(HT s) {
    return (s.a + s.b > s.c) && (s.b + s.c > s.a) && (s.c + s.a > s.b);
}
double kc(double a1,double a2,double b1,double b2){
    return sqrt((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2));
}
void check() {
    HT s;
    double d1,d2,d3,d4,d5,d6;
    cin>>d1>>d2>>d3>>d4>>d5>>d6;
    s.a=kc(d1,d2,d3,d4);
    s.b=kc(d1,d2,d5,d6);
    s.c=kc(d3,d4,d5,d6);
    if(!kt(s)){
        cout<<"INVALID"<<endl;return;
    }
    double p=s.a+s.b+s.c;
    double S=1.0/4.0*sqrt(p*(p-2*s.a)*(p-2*s.b)*(p-2*s.c));
    double R=s.a*s.b*s.c/(4.0*S);
    double dt=PI*R*R;
    cout<<fixed<<setprecision(3)<<dt<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        check();
    }
}