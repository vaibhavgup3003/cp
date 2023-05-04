#include<bits/stdc++.h>
using namespace std;
int main()
{
    // map<int , string> m; //here first element is the key, if key is string then map is printed in lexographical order.
    // m[1]="abc";
    // m[3]="csd";
    // m[7]="skd";
    // m.insert({4, "afg"});
    // cout << m[1]; // this will output the value corresponding to 3.
    // map<int,string> :: iterator it;
    // for (it = m.begin(); it!= m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second<<endl;
    // }
    // /* each operation like insertion deletion even declaring a map takes Olog(n) time.*/
    // //auto declares a new iterator of required type
    // auto it = m.find(3); // this returns an itereator
    // cout << (*m.find(3)).first << " " << (*m.find(3)).second<<endl;
    // m.erase(3); // this will erase whole pair 3
    // m.clear(); // clears the whole map

/* Q. given n strings, print unique strings in lexograpical order with their frequency*/
map <string ,int> k;
int n; cin >> n;
for (int i = 0; i < n; i++)
{
    string s; cin >> s;
    k[s]++;
}

for(auto it:k){
    cout << it.first << " " << it.second << endl;
}
// # unordered map
unordered_map < int, string> g;
// all other operation in map are applicable in unordered map but time complexity of unordered map is O(1). so if order is not important then use unordered map. 
}

 bool cmp(pair<int , int> p1, pair < int, int > p2){
      if(p1.second == p2.second)
      return p1.first>p2.first;
      return p1.second>p2.second;
  }
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++ ){
            m[i]++;
        }
        vector < int , int > fa ( m.begin(), m.end());
        sort(v.begin(),v.end(),cmp);
        // sort(m.begin(), m.end(), cmp);
        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(fa[i].first);
        }
        return ans;
    }
        
// m.erase(val); //Erases the pair from the map where the key_type is val.

// map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
// Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().

// To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.