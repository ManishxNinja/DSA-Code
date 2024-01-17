#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

class linkedlist{
    private:
    node *top;
    public:
    linkedlist(){
        top = NULL;
    }
    void push_back(int value){
        node *t;
        t = new node();
        if (t == NULL)
        {
            cout<<"stack is full"<<endl;
        }
        else{
            t->data = value;
            t->next = top;
            top = t;
        }
        
        
    }
    int pop(){
        int x;
        if (top == NULL)
        {
            cout<<"stack is empty"<<endl;
        }
        else{
            node*t;
            t = top;
            x = top->data;
            top = top->next;
            delete t;
        }
        return x;
    }
    int peek(int pos){
        if (top == NULL)
        {
            cout<<"stack is empty"<<endl;
        }
        else {
            for (int i = 1; i < pos-1; i++)
            {
                top = top->next;
            }
            
            
        }
        return top->data;

        
    }




};
int main(){
    linkedlist ll;
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(6);
    ll.push_back(87);
    ll.push_back(8);
    cout<<ll.pop()<<endl;
    cout<<ll.peek(3)<<endl;
    
    return 0;
}