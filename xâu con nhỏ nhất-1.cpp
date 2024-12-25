#include<iostream>
using namespace std;
#include<string>
void check(){
    string s1,s2;cin>>s1>>s2;
    int len1=s1.size(),len2=s2.size();
    int count=0;
    int start=0,mark=-1;
    int minlen=1e9;
    int f1[256]={0};
    int f2[256]={0};
    for(int i=0;i<len2;i++) f2[s2[i]]++;
    for(int i=0;i<len1;i++){
        f1[s1[i]]++;
        if(f2[s1[i]]!=0&&f1[s1[i]]<=f2[s1[i]]) count++;
        if(count==len2){
            while(f1[s1[start]]>f2[s1[start]]||f2[s1[start]]==0){
                if(f1[s1[start]]>f2[s1[start]]&&f2[s1[start]]!=0)f1[s1[start]]--;
                start++;
            }
            if(i-start+1<minlen){
                minlen=i-start+1;
                mark=start;
            }
        }
    }
    if(mark==-1) cout<<-1<<endl;
    else cout<<s1.substr(mark,minlen)<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}