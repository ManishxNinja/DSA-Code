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
    
        while(st->top != size - 1)
        {
            cin>>value;
            st->top++;
            st->s[st->top] = value;
        }
    }

}
int pop(stack *st){
    int x = -1;
    if (st->top == -1)
    {
        cout<<"stack is empty";
    }
    else{
        x = st->s[st->top];
        st->top--;
        return x;
    }
    return x;
}
    

void peek(stack *st,int pos){
    cout<<st->s[(st->top - pos)+1];

}
bool parenth(char *t,stack *st){
    for (int i = 0; t[i]!='\0'; i++)
    {
        if (t[i] == '(')
        {
            st->top++;
            st->s[st->top] = t[i];
        }
        else if (t[i] == ')')
        {
            if (st->top == -1)
            {
                return false;
            }
            else{
                pop(st);
            }
            
        }
        
        
        
    }
    if (st->top != -1)
    {
        return false;
    }
    
    return true;
    
    


}


int main(){
    
    char ar[] = "((a+b)*(c-d))";
    stack st(4,-1);
    cout<<parenth(ar,&st);
    
    return 0;
}