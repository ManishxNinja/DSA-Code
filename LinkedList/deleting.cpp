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

void display(class node *p){
    while (p!=NULL)
    {
        cout<<p->data<<" " ;
        p = p->next;
    }
    

}
void delt(class node *first,int pos){
    class node *q,*p;
    int x;
    if (pos == 1)
    {
        p = first;
        first = first->next;
        x =p->data;
        delete p;
    }
    else{
        p = first;
        q = NULL;
        for (int  i = 1; i < pos && p; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
        
        
    }
    

}

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    create(a,n);
    display(first);
    delt(first,3);
    cout<<endl<<endl;
    display(first);
    
    
    return 0;
}