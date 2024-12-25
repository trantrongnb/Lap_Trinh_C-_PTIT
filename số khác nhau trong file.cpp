#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    ifstream file;
    file.open("DATA.in");
    int n;
    while(file>>n){
        mp[n]++;
    }
    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}