#include<iostream>
using namespace std;
//#include<string>
#include<utility>
pair<string,string> p1=make_pair("101","ABBADCCABDCCABD");
pair<string,string> p2=make_pair("102","ACCABCDDBBCDDBB");
int main(){
    int t;cin>>t;
    while(t--){
        string ma;
        char a[20];
        cin>>ma;
        for(int i=0;i<15;i++) cin>>a[i];
        if(p1.first==ma){
            int dem=0;
            for(int i=0;i<15;i++){
                if(p1.second[i]==a[i]) dem++;
            }
            double s=(double)dem/15.0*10;
            printf("%.2lf",s);
            cout<<endl;
        }else {
             int dem=0;
            for(int i=0;i<15;i++){
                if(p2.second[i]==a[i]) dem++;
            }
            double s=(double)dem/15.0*10;
            printf("%.2lf",s);
            cout<<endl;
        }
    }
}