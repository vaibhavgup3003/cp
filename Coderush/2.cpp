
#include <bits/stdc++.h>
  using namespace std;

  int main() {
    int n; cin>>n;
    vector<int>v(n);
    int oc = 0, ec = 0;
    for(auto &i:v){
      cin>>i;
      if(i%2==0)ec++;
      else oc++;
    }
    int cnt =0;
    cnt = min(oc, ec);
    // for (int i = 0; i < n-1; i++)
    // {
    //     if(v[i]%2!=0&&v[i+1]%2==0 && v[i+2]==0){
    //     cnt++; v.erase(v.begin()+0);
    //     }
    //     else if (v[i]%2!=0&&v[i+1]%2==0 && v[i+2]!=0){
    //     cnt++; v.erase(v.begin()+1);
    //     }
    //     else if (v[i]%2==0&&v[i+1]%2!=0 && v[i+2]%2!=0){
    //     cnt++; v.erase(v.begin()+0);}
    //     else if (v[i]%2==0&&v[i+1]%2!=0 && v[i+2]%2==0){
    //     cnt++; v.erase(v.begin()+1);}
        
        
    // }
    cout << cnt << endl;
    
    
    

    return 0;

  }