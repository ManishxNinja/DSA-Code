#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
}*first;

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
void count(class node *p){
    int c = 0;
    while(p != 0)
    {
        c++;
        p = p->next;
    }
    cout<<c;
    

}

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    create(a,n);
    count(first);
    
    return 0;
}