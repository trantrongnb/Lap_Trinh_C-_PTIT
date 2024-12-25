#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;
string thuong(string s){
    for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
    return s;
}
int main(){
    map<string,int> mp1,mp2;
    set<string> se;
    ifstream file1,file2;
    file1.open("DATA1.in");
    file2.open("DATA2.in");
    string s;
    while(file1>>s){
        s=thuong(s);
        mp1[s]++;
        se.insert(s);
    }
    while(file2>>s){
        s=thuong(s);
        mp2[s]++;
        se.insert(s);
    }
    for(string x:se) cout<<x<<" ";
    cout<<endl;
    for(auto i:mp1){
        if(mp2.find(i.first)!=mp2.end()) cout<<i.first<<" ";
    }
    file1.close();
    file2.close();
}