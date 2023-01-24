#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void traverse(node *&head)  // same as in singly ll
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
 
int counter(node *head)  // same as in singly ll
{
  int cnt = 0;
  while (head != NULL)
  {
    head = head->next;
    cnt++;
  }
  return cnt;
}

void insertnode(node* &head, int data, int pos){
    node*temp = head;
    node*newnode = new node(data);
    if(head==NULL){
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else if(pos == 1){
       newnode->next = head;
       head->prev = newnode;
       newnode->prev = NULL;
       head=newnode;}
       else{
    
    int cnt=1;
    while(cnt != pos -1 ){
        temp= temp->next;
        cnt++;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
       }   
}
void deletebypos(node *&head, int pos)
{
  node *temp = head;
  int cnt = 1;
  if (pos == 1)
  {
    head = head->next;
  }
  else
  {
    while (cnt != pos - 1)
    {
      temp = temp->next;
      cnt++;
    }
    if(pos==counter(head)){
      temp->next = NULL;
    }
    else{
    temp->next = temp->next->next;
    temp->next->prev =temp;
    }
  }
}
void deletebyvalue(node *&head, int value)
{

  node *temp = head;
  int cnt = 0; // to count position of the value
  int pos = 1; // position of the traversed ll
  if (head->data == value)
  {
    head = head->next;
  }
  else
  {
    while (temp->data != value)
    {
      temp = temp->next;
      cnt++;
    }
    temp = head;
    while (pos != cnt)
    {
      temp = temp->next;
      pos++;
    }
    if(cnt == counter(head)-1){
      temp->next = NULL;
    }
    else{
    temp->next = temp->next->next;
    temp->next->prev =temp;
  }
}
}

main(){
    node * newnode = new node(10);
    node*head = newnode;
    insertnode(head, 15, 1);
    insertnode(head, 16, 2);
    insertnode(head, 17, 3);
    // traverse(head);
    insertnode(head, 20, 1);
    traverse(head);
    // deletebypos(head, 5);
    deletebyvalue(head, 10);
    traverse(head);
    counter(head);
}