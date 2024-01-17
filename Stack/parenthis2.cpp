#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

class stack{
    private:
    node *top;
    public:
    stack(){
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
    bool parenthi(char *a ){
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == '{' || a[i] == '(' || a[i] == '[' )
            {
                push_back(a[i]);
            }
            else if (a[i] == '}' || a[i] == ')' || a[i] == ']')
            {
                if(top == NULL){
                    return false;
                }
                char openbrac;
                switch (a[i]){
                
                    case '}':
                        openbrac = '{';
                        break;
                    case ']':
                        openbrac = '[';
                        break;
                    case ')':
                        openbrac = '(';
                        break;
                    
                    
                }
                if (openbrac == top->data)
                {
                    pop();
                }
                else{
                    return false;
                }
                
            }
            
            
        }
        if (top != NULL)
        {
            return false;
        }
        return true;
        
        

    }


};

int main(){
    char ar[] = "{([a+b]*[c-d])}";
    stack st;
    cout<<st.parenthi(ar);
    
    
    
    
    return 0;
}