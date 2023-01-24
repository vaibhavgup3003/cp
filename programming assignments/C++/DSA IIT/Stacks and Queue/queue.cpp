#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int rear, front;
    int size;
    int *arr;
    Queue(int size){
        this->size = size;
        this ->rear = 0;
        this -> front = 0;
        arr = new int[size];
    }

  void enqueue(int data){
       if(rear == size)
       cout << "Queue is full\n";
       else
       {
        arr[rear] = data;
        rear++;
       }
  }
  void dequeue(){
    if (front == rear){
        cout << "Queue is empty\n";}
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front ++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }
  };