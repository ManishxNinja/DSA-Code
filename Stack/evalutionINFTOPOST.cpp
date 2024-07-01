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
    int isoperand(char x){
        if (x == '+' || x == '-' || x == '/' || x == '*')
        {
            return 1;
        }
        return 0;
        
    }
    int evaluation(char *ptr){
        int a,b,res;
        int i = 0;
        while (ptr[i] != '\0')
        {
            if (isoperand(ptr[i]) == 1)
            {
                a = pop();
                b = pop();
                switch (ptr[i])
                {
                case '+':
                    res = b + a;
                    break;
                case '-':
                    res = b - a;
                    break;
                case '*':
                    res = b * a;
                    break;
                case '/':
                    res = b / a;
                    break;
                
                default:
                    break;
                }
                push_back(res);
                i++;
                
                
            }
            else
            {
                push_back(ptr[i++] - '0');
            }
            
            
        }
        return res;
        
    }
 


};

int main(){
    char ar[30] = "35*62/+4-";
    stack st;
    cout<<st.evaluation(ar); 
    
    return 0;
}