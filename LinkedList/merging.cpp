#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

}*first = NULL;

void link(node *p,int i){
    node *t,*last;
    int j = i+5;
    last = p;
    while(i!=j){
        t = new node();
        t->data = i;
        t->next = NULL;
        last->next = t;
        last = t;
        i++;

    }
}
void merge(node *first,node *second){
    node *last,*third;
    if (first->data<second->data)
    {
        third = first ;
        last = third;
        first = first->next;
        last->next = NULL;

    }
    else{
        third =  second;
        last  = third;
        second = second->next;
        last->next = NULL;

    }
    while (first !=NULL && second != NULL)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
        }
        else{
            last->next = second;
            last = second;
            second = second->next;
        }
    }
    if (first !=NULL)
    {
        last->next = first;
    }
    else{
        last->next = second;
    }
    
    
    while (third != NULL)
    {
        cout<<third->data<<" ";
        third = third->next;
    }
    
}


int main(){
    first = new node();
    first->data = 1;
    first->next = NULL;
    link(first,1);


    node *second;
    second = new node();
    second->data = 1;
    second->next = NULL;
    link(second,7);

    merge(first,second);
    
    
    return 0;
}