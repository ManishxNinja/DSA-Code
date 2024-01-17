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

int checksort(class node*p){
    int x = INT16_MIN;
    while (p!=0)
    {
        if (x>p->data)
        {
            return false;
        }
        x = p->data;
        p = p->next;
        
    }
    return true;
    
}

void display(class node *p){
    while (p!=NULL)
    {
        cout<<p->data<<" " ;
        p = p->next;
    }
    

}

int main(){
    int a[] = {1,6,3,4,5};
    int n = 5;
    create(a,n);
    // display(first);
    cout<<checksort(first);
    
    
    return 0;
}