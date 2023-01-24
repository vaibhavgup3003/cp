
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node *next;
  node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
int counter(node *head)
{
  node *temp = head;
  int cnt = 0;
  while (temp != NULL)
  {
    temp = temp->next;
    cnt++;
  }
  return cnt;
}
void insertathead(node *&head, int data)
{ // why we cannot use node*head=temp here??
  // node*temp = head;   // because if we are inserting at head then head needs to be changed.
  node *newnode = new node(data);
  newnode->next = head;
  head = newnode;
}
void insertatend(node *&head, int data)
{
  node *temp = head;
  while (temp->next != NULL)
    temp = temp->next;
  node *newnode = new node(data);
  temp->next = newnode;
  newnode->next = NULL;
}
void insertatany(node *head, int data, int pos)
{ // why further ll is not being traversed;
  node *temp = head;
  int cnt = 1;
  while (cnt != pos - 1)
  {
    temp = temp->next;
    cnt++;
  }
  node *newnode = new node(data);
  newnode->next = temp->next;
  temp->next = newnode;
  // return head;                            // why can't we return head
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
    temp->next = temp->next->next;
  }
}
void deletebyvalue(node *head, int value)
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
    temp->next = temp->next->next;
  }
}

void traverse(node *&head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
int main()
{
  node *newnode = new node(10);
  // cout << newnode->data << endl;
  // cout << newnode->next << endl;
  node *head = newnode; // create head to pass in function
  // traverse(head);
  int data; cin>>data;
  insertathead(head, data);
  insertathead(head, 10);
  insertathead(head, 13);
  insertathead(head, 5);
  traverse(head);
  insertatend(head, 15);
  insertatend(head, 16);
  insertatend(head, 17);
  insertatend(head, 18);
  traverse(head);
  insertatany(head, 20, 10);
  traverse(head);
  deletebyvalue(head, 5);
  traverse(head);
}
