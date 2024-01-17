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
        front = -1;
        rear = -1;
        q = new int[size];

    }

    void enqueue(int x){
        if (rear == size - 1)
        {
            cout<<"queue is full"<<endl;
        }
        else{
            q[rear++] = x;
        }
        
    }
    int dequeue(){
        int x = -1;
        if (front == rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            x = q[front++];
        }
        return x;
        
    }
    void display(){
        for (int i = front +1; i <= rear; i++)
        {
            cout<<q[i]<<" ";
        }
        
        
    }

};

int main(){
    queue qu(6);
    // qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    qu.enqueue(4);
    qu.enqueue(6);
   

    qu.display();
    return 0;
}