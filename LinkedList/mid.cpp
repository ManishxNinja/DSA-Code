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
    int mid();
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
    

}
int linkedlist:: mid(){
    node *p,*q;
    p = q = first;
    while (q)
    {
        q = q->next;
        if (q)
        {
            q = q->next;
        }
        if (q)
        {
            p = p->next;
        }
        
        
    }
    return p->data;
    
}





int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    linkedlist l(a,n);
    cout<<l.mid();
    return 0;
}