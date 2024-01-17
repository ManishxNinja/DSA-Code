#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
}*first = NULL;


void create(int a[],int n){
    class node *t,*last;
    first = new node();
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node();
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
        
    }
    


}

void remove(class node *p){
    class node *q;
    q = p->next;
    while (q!=0)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
        
    }
    

}

void display(class node *p){
    while (p!=NULL)
    {
        cout<<p->data<<" " ;
        p = p->next;
    }
    

}

int main(){
    int a[] = {3,3,3,3,3};
    int n = 5;
    create(a,n);
    remove(first);
    display(first);
    
    
    return 0;
}