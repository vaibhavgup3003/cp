
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
int counter(node *head) // untill we reach on the same data value
{
    node *temp = head;
    int cnt = 1;
    int d = temp->data;
    while (temp->data != d)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void traverse(node *&head)
{
    node *temp = head;
    int d = temp->data;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp->data != d);
    cout << endl;
}

void insertatany(node *&head, int data, int value) // insertion is done after a given value
{

    node *temp = head;
    node *newnode = new node(data);

    int cnt = 0; // to count position of the value
    int pos = 1; // position of the traversed ll
    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
    }
    else
    {
        while (temp->data != value)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void deletenode(node *head, int value)
{
    node *temp = head;
    if(temp->next = temp)
    temp=NULL;
    while (temp->next->data != value)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

int main()
{
    //   node *newnode = new node(10);
    //   cout << newnode->data << endl;
    // cout << newnode->next << endl;
    node *head = NULL; // create head to pass in function
    insertatany(head, 20, 10);
    traverse(head);
    insertatany(head, 4, 20);
    traverse(head);
    insertatany(head, 250, 4);
    traverse(head);
    insertatany(head, 8, 250);
    traverse(head);
    insertatany(head, 10, 8);
    //   insertatany(head, 21, 10);
    traverse(head);
    deletenode(head, 20);
    traverse(head);
}
