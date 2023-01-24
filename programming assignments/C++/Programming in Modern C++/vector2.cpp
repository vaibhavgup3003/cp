#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
  {
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
  }
int main()
{
//   pair<int , string> p;
//   p= {32, "vaibhav"};
//   cout << p.first<< " " << p.second<< endl;
  
  


//   int size;
//   cin>>size;
//   vector<int> arr;
//   arr.resize(size);
//   int element;
//   for (int i = 0; i < size; i++)
//   {
//     cin >> element;
//     arr.push_back(element);
//     cout << arr.size() << endl;
//   }
//   vector<int> v2= arr;

//   display(v2);
  vector<int> v3;
  int N;
  cin >> N;
  vector<int> V[N];
  for (int i = 0; i < N; i++)
  {
    int n;
    cin >> n;
    for (int j = 0; j<n; j++)
    {
        int x;
        cin >> x;
        V[i].push_back(x);
    }
  }
//   vector< vector <int>>v;
//   for (int i = 0; i < v.size(); i++)
//   {
//     int n1;
//     cin >> n1;
//     v[i].resize(n1);
//     for (int j = 0; j < v[i].size(); j++)
//     {
//         int element;
//         cin >> element;
//         v[i].push_back(element);
//     }
//   }
  int n;cin>>n;
    vector<int>v(n); // this will initiallise the vector with n zeros;
    // this defines vector with actual size n
    // and push_back() increases the size of vector by 1 every time

    // * method 1 * // 

    for(int i =0 ; i++<n;){
      cin >> v[i];
    }
    for(int i =0 ;i++<n;)
    cout << v[i] << " ";

    // *method 2 *//


    for(auto& i : v){     // size declaration of v is mandatory   
      cin >> i;
    }
    for(int i:v)
    cout << i << " ";

    // method 3 is usual method
  
  

   
}