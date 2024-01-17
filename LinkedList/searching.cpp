#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
}*first;

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

int search(class node *p,int key){
    class node *q;
    while (p!=NULL)
    {
        if (p->data == key)
        {
            q->next = p->next;// Moving head.
            p->next = first;
            first = p;
            return 1;

            
        }
        q = p;
        p = p->next;
        
    }
    return 0;
    

}


int main(){
    int a[] = {1,2,3,12,5};
    int n = 5;
    int key = 12;
    create(a,n);
    cout<<search(first,key);
    
    return 0;
}