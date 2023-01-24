/* Hasing is the insertion of data according to the hash function
 let suppose f(x) = x%10; is hash function the f(x) will tell the indices of the array where the
 elements are to be stores;

** Hash collision occurs when there same value of f(x) for two different values of x
*/



































// Q.Impelement various types of hashing like universal,trivial,mod prime,identity,folding.

// #include<bits/stdc++.h>
// using namespace std;
// class hashmap
// {
//     int size;
//     vector<int>v[16];

//     public:
// hashmap()
//         {
//             size=16;
//         }
//         void insert(int x)
//         {
//             int val=universal(x);
//             v[val].push_back(x);
//         }
//         int identity(int x)
//         {
//             return x%size;
//         }
//         int universal(int x)
//         {
//             return (x%17)%size;
//         }
//         int folding(int x)
//         {
//             int index=0;
//             int temp=x;
//             while(temp)
//             {
//                 index=index^(temp&0xF);
//                 temp=temp>>0xF;
//             }
//             return index;
//         }
//         int trivial(int x)
//         {
//             return x&0x1F;
//         }
//         int search(int val)
//         {
//             int x=universal(val);
//             return x;
//         }
//         void display()
//         {
//             for(int i=0;i<16;i++)
//             {
// cout<<i<<" --> ";
//                 for(int j=0;j<v[i].size();j++)
//                 {
// cout<<v[i][j]<<" , ";
//                 }cout<<endl;
//             }
//         }
// };
// int main()
// {
// hashmap a;
//     int x=211112201;
//     for(int i=0;i<40;i++)
//     {
// a.insert(x++);
//     }
// a.display();

//     return 0;
// }
// Universal hashing

// Folding hashing

// Identity hashing

// Modprime hashing