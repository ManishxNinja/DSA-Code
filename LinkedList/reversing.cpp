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
void reversee(class node* t){
    class node *q;
    q = t;
    int arr[5];
    int i = 0;
    while(q!=NULL){
        arr[i] = q->data;
        q = q->next;
        i++;

    }
    q = first;
    i--;
    while(q!=NULL){
        q->data = arr[i];
        q = q->next;
        i--;

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
    int a[] = {1,2,3,4,5};
    int n = 5;
    create(a,n);
    reversee(first);
    display(first);
    
    
    return 0;
}