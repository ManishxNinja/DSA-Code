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

int isloop(node *f){
    node *q,*p;
    p = q = f;
    do
    {
        p = p->next;
        q= q->next;
        if (q!=NULL)
        {
            q = q->next;
        }
        
    } while (p && q && p!=q);

    if (p == q)
    {
        return 1;
    }
    else{
        return 2;
    }
    
    

}

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    node *t1,*t2;
    
    create(a,n);
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    cout<<isloop(first);
    display(first);
    
    
    return 0;
}