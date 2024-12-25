#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<stack>
#include<string>
using namespace std;
void check(){
    string s;cin>>s;
    stack<int> st;
    int dem=1;
    st.push(1);
    for(int i=0;i<s.size();i++){
        dem++;
        if(s[i]=='I'){
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
        }
        st.push(dem);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
        cout<<endl;
    }
}