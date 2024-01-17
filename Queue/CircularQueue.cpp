#include<iostream>
using namespace std;

class queue
{
    public:
    int size;
    int front;
    int rear;
    int *q;

    queue(int size){
        this->size = size;
        front = 0;
        rear = 0;
        q = new int[size];

    }

    void enqueue(int x){
        if ((rear + 1)%size == front)
        {
            cout<<"Queue is full";
        }
        else{
            rear = (rear + 1)%size;
            q[rear] = x;
        }
        
        
    }
    int dequeue(){
        int x = -1;
        if (front == rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            front = (front + 1)%size;
            x = q[front];
        }
        return x;
        
    }
    void display(){
        int i = front + 1;
        for ( i; i != (rear+1)%size; i = (i+1)%size)
        {
            cout<< q[i]<<" ";
        }
        
        
        
    }

};

int main(){
    queue q(7);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    
    
    

    q.display();

    return 0;
}