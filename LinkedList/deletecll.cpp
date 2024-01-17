#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};

class linkedlist{
    private:
    node *first;
    public:
    linkedlist(){first = NULL;}
    linkedlist(int a[],int n);

    void del(int pos);
    void display();


};

linkedlist ::linkedlist(int a[],int n){
    node *t,*last;
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
    last->next = first;
    

}
void linkedlist::del(int pos){
    node *p,*q;
    if (pos == 1)
    {
        p = first;
        while (p->next != first)
        {
            p=p->next;
        }
        if (p == first)
        {
            delete first;
            first = NULL;
        }
        else{
            p->next = first->next;
            delete first;
            first = p->next;

        }
        
        
    }
    else{
    
        p = first;
        for (int i = 1; i < pos-1; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        int x = q->data;
        delete q;
    }
    
}
void linkedlist::display(){
    cout<<first->data;
    node *p;
    p= first->next;
    while (p!=first)
    {
        cout<<p->data<<" " ;
        p = p->next;
    }
}





int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    linkedlist l(a,n);
    l.del(4);
    l.display();
    return 0;
}