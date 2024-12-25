#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int check(string s) {
	for (int i = 0; i < s.length(); i++)
		if (s[i] > '9' || s[i] < '0')
			return 0;
	if (s.length() > 10)return 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'||s[i]=='+') return 0;
    }
	return 1;
}
int main() {
	long long res = 0;
	fstream file;
	file.open("DATA.in");
    string s;
    while(file>>s){
        if(check(s)==1) res+=stoi(s);
    }
	file.close();
	cout << res << endl;
}