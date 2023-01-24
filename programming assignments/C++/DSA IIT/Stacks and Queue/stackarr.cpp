#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;
    Stack(int size){
        this->size = size;
        this->top = -1;
        arr = new int[size];
    }
    void push(int data){
     if(size-top>1){
     top++;
     arr[top] = data;
     }
     else 
     cout << "Stack overflow\n"; 
    }
    void pop(){
    if(top>-1)
    top--;
    else
    cout << "Stack is empty\n";
    }

    int peek(){ 
        if(top>-1&&top<size)
   return arr[top];
    }
    bool isempty(){
        if(top==-1)
        return true;
        else
        return false;
    }

};
main (){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(14);
    st.push(18);
    cout << st.peek();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.peek();
}