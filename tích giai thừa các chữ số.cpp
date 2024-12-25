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
int main(){
    int t;cin>>t;
    while(t--){
        int n;string s;
        cin>>n>>s;
        string ans="";
        for(int i=0;i<s.size();i++){
            switch (s[i]){
                //case '0': ans+="1";break;
               // case '1':ans+="1";break;
                case '2':ans+="2";break;
                case '3':ans+="3";break;
                case '4':ans+="322";break;
                case '5':ans+="5";break;
                case '6':ans+="53";break;
                case '7':ans+="7";break;
                case '8':ans+="7222";break;
                case '9':ans+="7332";break;
            }
        }
        sort(ans.begin(),ans.end(),greater<char>());
        cout<<ans<<endl;
    }
}