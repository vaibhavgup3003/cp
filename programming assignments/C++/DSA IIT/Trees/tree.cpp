#include <bits/stdc++.h>
using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int data){
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// node* buildtree(node* root){
//     int data;
//      cout<< "Enter the data for the root" << endl;
//      cin >> data;
//      root = new node(data);
//      if(data == -1)
//      return NULL;
//      cout << "Enter the data for inserting in left of" << data << endl;
//      cin >> data;
//      root -> left = buildtree(root->left);

//      cout << "Enter the data for inserting in right of" << data << endl;
//      root -> right = buildtree(root->right);
// }
// node* level_order()
// int main(){

// }
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        data = data;
        left = right = NULL;
    }
};
void preorder(node *root)
{
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    root->right->left = new node(5);
    preorder(root);
}
