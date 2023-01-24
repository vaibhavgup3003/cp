#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string s){
    unordered_map<char, int> m = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
    stack<char> st;
    for(char brkt : s){
        if(m[brkt] < 0)
        st.push(brkt);
        else if(s[i] == ')'|| s[i] == '}'|| s[i] == ']' ){
            char top = st.top();
            if(top==s[i])
        }
        if(st.empty()) return false;
        char top = st.top();
        st.pop();
    }
}
main(){

}