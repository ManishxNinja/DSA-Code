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
    cout<<last->next->data;
    

}





int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    linkedlist l(a,n);
    // cout<<l.isloop();
    return 0;
}