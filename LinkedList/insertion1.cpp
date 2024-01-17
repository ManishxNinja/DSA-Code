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

void insert(class node *p,int value,int where){
    class node *t,*l;
    if(where == 1 || p == NULL){
        t = new node();
        t->data = value;
        t->next = first;
        first = t;
    }
    else{
        t = new node();
        t->data = value;
        for (int i = 1; i < where -1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {
           t->next = p->next;
           p->next = t;

        }
        
        

    }
} 

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    // create(a,n);
    // display(first);
    // cout<<endl;
    // insert(first,10,6);//insert before linked list
    // display(first);
    insert(first,12,1);
    insert(first,13,2);
    insert(first,13,3);
    insert(first,13,4);
    insert(first,13,5);
    insert(first,13,6);
    display(first);
    
    
    
    return 0;
}