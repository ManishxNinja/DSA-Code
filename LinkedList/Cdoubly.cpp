#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *pre;
};
class linkedlist{
    private:
    node *head;
    public:
    linkedlist(){head = NULL;}
    linkedlist(int a[],int n);
    void insertion(int pos,int x);
    void del(int pos);
    void display();

};

linkedlist::linkedlist(int a[],int n){
    node *last,*t;
    head = new node();
    head->data = a[0];
    head->next = NULL;
    head->pre = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new node();
        t->data = a[i];
        t->pre = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
    last->next = head;
    head->pre = last;
    



}
void linkedlist::insertion(int pos,int x){
    node*p,*q;
    if (pos == 1)
    {
        if (head == NULL)
        {
            head->data = x;
            head->next = head;
            head->pre = head;
        }
        else{
            p = head->pre;
            node*r;
            r = new node();
            r->data = x;
            r->pre = head->pre;
            r->next = head;
            head->pre = r;
            p->next = r;
            head = r;

        }
        
    }
    else{
        p = head;

    
        for (int i = 1; i < pos-1; i++)
        {
            p = p->next;
        }
        q = p->next;
        node *r;
        r = new node();
        r->data = x;
        r->next = p->next;
        r->pre = q->pre;
        p->next = r;
        q->pre = r;
    }
}
void linkedlist::del(int pos){
    if (pos == 1)
    {
        int x;
        if(head == NULL){
            x = head->data;
            delete head;
            
        }
        else{
            node *q,*p;
            p = head->pre;
            q = head->next;
            p->next = head->next;
            q->pre = head->pre;
            int x = head->data;
            delete head;

        }
    }
    
    node *q,*p,*e;
    e = head;
    for (int i = 1; i < pos; i++)
    {
        e = e->next;
    }
    p = e->pre;
    q = e->next;
    p->next = e->next;
    q->pre = e->pre;
    int x = e->data;
    delete e;
    
}

void linkedlist::display(){
    node*p;
    p = head->next;
    cout<<head->data<<" ";
    while (p != head)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    
}

int main(){
    int a[] = {1,2,3,4,5};
    linkedlist ll(a,5);
    // ll.insertion(1,10);
    ll.del(1);
    ll.display();


    
    return 0;
}