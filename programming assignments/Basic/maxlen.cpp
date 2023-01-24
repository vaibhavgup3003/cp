#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int n;cin >>n;
vector<ll>v(n);
for(auto&i:v){
  cin >> i;
}

ll cnt =1,maxlen=1;
for(int i=0; i<n-1; i++){
  if(v[i]<=v[i+1]){
    cnt++;
    if(cnt>maxlen)
    maxlen = cnt;
  }
  else
  cnt =1;
}
cout << maxlen << endl;
}
