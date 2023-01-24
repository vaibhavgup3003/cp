#include<bits/stdc++.h>
using namespace std;
// iterative
vector<string>  all_substrings_loop(string s){
    vector<string> v;
    for(int i = 0; i< 1<<s.length();i++ ){
            string substr = "";
        for (int j = 0; j < s.length(); j++)
        {
            if(i & (1<<j)){
            substr += s[j]; 
        }
    } 
    if(substr.size()>0)
        v.push_back(substr);
}
sort(v.begin(),v.end());
    return v;
}

// recursive and backtrack
void all_substrings_rec(int ind, 
string s, string final){
   
    string sub = "";
   if(ind >= s.size()){
      cout << final << endl;
       return;
   }
   final = final + s[ind];
   all_substrings_rec(ind+1,s,final);
   final.pop_back();
   all_substrings_rec(ind+1, s,final);

}
int main(){
string s;
cin>>s;
string f="";
vector<string> v = all_substrings_loop(s);
for(int i = 0; i<v.size(); i++){
    // cout<<v[i] << endl;
}
all_substrings_rec(0,s,f);
    return 0;
}