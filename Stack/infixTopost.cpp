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
    int presedence(char x){
        if (x == '+' || x == '-')
        {
            return 1;
        }
        else if (x == '/' || x == '*')
        {
            return 2;
        }
        return 0;
        
        
    }
    int isoperand(char x){
        if (x == '+' || x == '-' || x == '/' || x == '*')
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
            else{
                if (top == NULL)
                {
                    push_back(ar[i++]);
                }
                else if (presedence(top->data)>= presedence(ar[i]))
                {
                    post[j++] = pop();
                    
                    
                }
                else{
                    push_back(ar[i++]);
                }
                

                
                
                
            }
            
        }
        
        j = 0;
        while (top != NULL)
        {
            post[j++] = pop();
        }
        post[j] = '\0';
            
        
        

        

    }



};

int main(){
    char ar[20] = "a+b*c";
    char post[20];
    stack st;
    st.infixtopost(ar,post);
    cout<<post;
    
    
    
    
    return 0;
}