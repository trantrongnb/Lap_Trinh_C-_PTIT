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
    set<string> se;
    ifstream file;
    file.open("VANBAN.in");
    string s;
    while(file>>s){
        se.insert(thuong(s));
    }
    for( string i:se) cout<<i<<endl;
    file.close();
}