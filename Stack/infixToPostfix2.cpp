#include<iostream>
using namespace std;

class node{
    public:
    char data;
    node *next;
};

class stack{
    private:
    node *top;
    public:
    stack(){
        top = NULL;
    }
    void push_back(char value){
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
    char pop(){
        char x;
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
    int Outpresedence(char x){
        if (x == '+' || x == '-')
        {
            return 1;
        }
        else if (x == '/' || x == '*')
        {
            return 3;
        }
        else if (x == '^')
        {
            return 6;
        }
        else if (x == '(' )
        {
            return 7;
        }
        return 0;
        
        
    }
    int inpresedence(char x){
        if (x == '+' || x == '-')
        {
            return 2;
        }
        else if (x == '/' || x == '*')
        {
            return 4;
        }
        else if (x == '^')
        {
            return 5;
        }
        else if (x == '(')
        {
            return 0;
        } 
        return -1;

    }
    int isoperand(char a){
        if (a == '+' || a == '-' || a == '/' || a == '*' || a =='(' || a == '^' || a == ')')
        {
            return 1;
        }
        
        return 0;
        
    }
    void infixtopost(char *ar,char *post){
        int i =0,j = 0;
        while (ar[i] != '\0')
        {
            if (isoperand(ar[i]) == 0)
            {
                post[j++] = ar[i++];
                
            }
            else if (isoperand(ar[i]) == 1)
            {
                if (top == NULL || ar[i] == '(')
                {
                    push_back(ar[i++]);
                }
                else if (Outpresedence(ar[i]) > inpresedence(top->data))
                {
                    push_back(ar[i++]);


                        
                }
                else if (Outpresedence(ar[i]) == inpresedence(top->data))
                {
                    pop();
                    i++;
                }
                
                else{
                    post[j++] = pop();

                }
                    
                
                
            }
            
        }
        while (top != NULL)
        {
            post[j++] = pop();
        }
        post[j] = '\0';
        
            
    }
        
};





int main(){
    char ar[30] = "((a+b)*c)-d^e^f";
    char post[30];
    stack st;
    st.infixtopost(ar,post);
    cout<<post;
    
    
    
    
    return 0;
}