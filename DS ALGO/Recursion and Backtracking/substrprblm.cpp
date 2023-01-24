#include<bits/stdc++.h>
using namespace std;
// bool flag = false;   // this is the way when you want to meet your condition only once
void substrsum(int ind, vector<int> num, vector<int> ans ,int sum, int target){
     if(ind == num.size()){
        if(sum == target  /*&& flag == false*/ ){
            // flag = true;                // this will get into the if condition only once
        for(auto it: ans)
        cout << it << " ";
        cout << endl; }
        return;
     }
     ans.push_back(num[ind]);
     sum += num[ind];
     substrsum(ind+1, num, ans, sum, target);
     sum -= num[ind];
     ans.pop_back();
     substrsum(ind+1, num, ans, sum, target);
}

// if i need to print only one subsequence then --modified code --
bool onlyonestr (int ind, vector<int> num, vector<int> ans ,int sum, int target){
     if(ind == num.size()){
        if(sum == target  ){
        for(auto it: ans)
           cout << it << " ";
           cout << endl; 
           return true;
        }
        return false;
     }
     ans.push_back(num[ind]);
     sum += num[ind];
    if( onlyonestr(ind+1, num, ans, sum, target) == true) return true;
     sum -= num[ind];
     ans.pop_back();

     //not pick
    if( onlyonestr(ind+1, num, ans, sum, target) == true) return true;

    return false;                                   // this is the major return type of the function
}

// if u need to print the number of subsequnces then: return 1 if the condition is satisfied else return 0 
// sum up the left and right recursion calls

int numsubstr (int ind, vector<int> num,int sum, int target){
     if(ind == num.size()){
        if(sum == target  ){
           return 1;
        }
        return 0;
     }
    
     sum += num[ind];
    int l =  numsubstr(ind+1, num, sum, target);
     sum -= num[ind];
     

   int r = numsubstr(ind+1, num, sum, target);

    return l+r;                                   // this is the major return type of the function
}
int main(){
 vector<int>v = {1,2,1};
 int target; cin >> target;
 int sum = 0;
//  vector<int> ans;
//  substrsum(0,v, ans, sum,target);
//  onlyonestr(0,v, ans, sum,target);
 cout << numsubstr(0,v, sum,target) << endl;
}