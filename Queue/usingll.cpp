#include<iostream>
using namespace std;

class node
{

public:
    int value;
    node *next;
};

class queue{
    private:
    node* front = NULL;
    node* rear = NULL;
    

    public:
    void enqueue(int x){
        node *t = new node();
        if (t = NULL)
        {
            cout<< "queue is full";
        }
        else{
            t->value = x;
            t->next = NULL;
            if (front == NULL)
            {
                front = rear = t;
            }
            else{
                rear->next = t;
                rear = t;
            }
        }
        

    }
    int dequeue(){
        int x = -1;
        if (front == rear)
        {
            cout<<"queue is empty";
        }
        else{
            node *q;
            q = front;
            x = front->value;
            front = front->next;
            free(q);
            return x;
            
        }
        return x;
        
    }
    void display(){
        node *p;
        while (p!= NULL)
        {
            cout<< p->value<<" ";
            p = p->next;
        }
        
    }
};


int main(){
    queue man;
    man.enqueue(1);
    man.enqueue(2);
    man.enqueue(3);
    man.enqueue(4);
    man.enqueue(5);
    man.enqueue(6);

    man.display();
    
    return 0;
}