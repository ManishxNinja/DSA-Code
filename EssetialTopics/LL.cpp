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
    ~linkedlist();

    void display();
    void del(int index);
    void insert(int index,int x);
    int isloop();


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
    node *t1,*t2;
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next  = t1;
    

}

int linkedlist::isloop(){
    node *p,*q;
    p = q = first;
    while (q && q && p!=q)
    {
        p = p->next;
        q = q->next->next;
        q=q?q = q->next:q;
        

    }
    if(p == q){
        return 1;
    }
    return 0;
    
    
    
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    linkedlist l(a,n);
    cout<<l.isloop();
    return 0;
}