#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *s;


    stack(int size,int top){
        this->size = size;
        this->top = top;
        s =  new int[size];
    }
};
void push(stack *st,int size){
    int value;
    if (st->top == st->size - 1)
    {
        cout<<"stack is full"; 
    }
    else{
    
        while(st->top != size-1)
        {
            cin>>value;
            st->top++;
            st->s[st->top] = value;
        }
    }

}
void peek(stack *st,int pos){
    cout<<st->s[(st->top - pos)+1];

}


int main(){
    int size = 5;
    int top = -1;
    stack st(size,top);
    push(&st,5);
    cout<<endl;
    cout<<endl;
    peek(&st,2);
    
    return 0;
}