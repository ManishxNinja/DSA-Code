#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
};




int main(){
    int a[] = {1,2,3,4,5,7,9,90};
    int n = 8;
    class node *first;
    first->data = a[0];
    first->next = NULL;
    class node *t,*last;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node();
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
        
    }
    class node *p = first;
    while (p!=NULL)
    {
        cout<<p->data<<" " ;
        p = p->next;
    }
    
    
    return 0;
}