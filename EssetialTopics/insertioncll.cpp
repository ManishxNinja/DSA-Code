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

    void insertion(int pos,int x);
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
void linkedlist::insertion(int pos,int x){
    node *p,*t;
    p = first;
    if (pos == 1)
    {
        t = new node();
        t->data = x;
        if (first == NULL)
        {
            first = t;
            first->next = first;
        }
        else{
            p = first;
            while(p->next!=first){
                p = p->next;
            }
            p->next = t;
            t->next = first;


        }
        
    }
    else{
        t = new node();
        t->data = x;
        t->next = NULL;
        for (int i = 1; i < pos-1; i++)
        {
            p= p->next;
        }
        t->next = p->next;
        p->next = t;
        

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
    l.insertion(4,10);
    l.display();
    return 0;
}