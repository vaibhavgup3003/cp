// // 1. Insert 10 elements in a linked list;
// // 2. insert element at (n/2 + 2)th position in a existing linked list.
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
//     node(int data){
//      this->data = data;
//      this -> next = NULL;
//     }
// };
// void insertnode(node* &head, int val){
//     node*temp = head;
//     node*newnode = new node(val);
//     newnode->next = head;
//     head = newnode;
// }
// void traverse(node*head){
//     node*temp = head;
//     while(temp->next!=NULL){
//     cout << temp->data<<" ";
//     temp = temp -> next;
//     }
// }
// void insertatany(node*&head, int val, int n){
//     node*temp = head;
//     int cnt = 1;
//     while(cnt != n/2 +1){
//     temp=temp-> next;
//     cnt++;}
//     node*newnode = new node(val);
//     newnode->next = temp->next;
//     temp->next = newnode;
// }
// int counter(node *head)
// {
//   node *temp = head;
//   int cnt = 0;
//   while (temp != NULL)
//   {
//     temp = temp->next;
//     cnt++;
//   }
//   return cnt;
// }
// void deletefromend(node*head){
//     node*temp = head;
//     int cnt=1;
//     while(cnt!=counter(head)- 4){
//         temp = temp->next;
//         cnt++;
//     }
//     temp->next=temp->next->next;
// }

// int main(){
//     node*head = new node(10);
//     for (int i = 1; i <= 10; i++)
//     {
//         insertnode(head, 5*i);
//     }
//     traverse(head);
//     insertatany(head, 19, 5);
//     cout<<endl;
//     traverse(head);
//     deletefromend(head);
//     cout<<endl;
//     traverse(head);
    
// }


#include<bits/stdc++.h>
using namespace std;
class marks{
    string roll, name;
    int mark;

    marks(){
        roll;
        name;
        mark;
    }
};
class X: private marks{
    int markx;
};
class Y: private marks{
    int marky;
};
class Z: private marks{
    int markz;
};

#include<bits/stdc++.h>
using namespace std;
class volume{
    
}