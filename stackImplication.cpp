#include<iostream>
using namespace std;

#define n 100

class Stack{
    int* data;
    int top;

    public:
    Stack() {
        data = new int[n];
        top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack is Full Can't Insert New Element(Stack Overflow)"<<endl;
            return;
        }

        top++;
        data[top] = x;
        cout<<"Value "<<x<<" is pushed to the stack"<<endl;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow, Stack is empty"<<endl;
            return;
        }
        
        top--;
    }

    int Top(){
        if(top==-1)
            cout<<"Stack Underflow, Stack is empty"<<endl;
            return top;
        
        return top;
    }

    bool empty(){
        return top==-1;
    }

};


int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"Is stack empty? "<<st.empty()<<endl;
    cout<<"Value of top = "<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

}