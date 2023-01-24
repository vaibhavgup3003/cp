#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void preorder(node *root)
{
    if(root==NULL)
    return;
    {
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);}
    
}
void inorder(node* root){
   if(root==NULL)
   return; {
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);}
}
void postorder(node* root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout << root-> data<<" ";
}
int height(node*root){
    if(root==NULL)
    return 0;
    int lh=0, rh=0;
    lh = height(root->left);
    rh = height(root->right);
    int ans = max(lh, rh)+1;
    return ans;
}

int main()
{
    node *root = new node(1);
    root->left = new node(3);
    root->right = new node(4);
    root->left->left = new node(5);
    root->left->right = new node(9);
    root->left->right->left = new node(15);
    root->left->right->right = new node(25);
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    cout << "Height of the tree is: ";
    cout << height(root);

}

// void k_dis(node* root, int k){

// void lot_height(node* root){
//     if(root == NULL)return;
//     int curr_height = height(root);
//     height(root->left);
//     height(root->right);
//     if(height(root) == 1 )
//     cout << root->data << " ";
    

// }
//     if(root==NULL){
//         return;
//     }
//     if(k==0)cout<<root->data<<" ";
//     else{
//         k_dis(root->left, k-1);
//         k_dis(root->right, k-1);
        
//     }