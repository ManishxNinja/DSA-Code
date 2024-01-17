#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
    int size;
    int front, rear;
    int *qu;

    public:
    Queue(int size){
        this->size = size;
        front = rear = -1;
        qu = new int[size];
    }
    void push_front(int x);
    void push_rear(int x);
    int pop_front();
    int pop_rear();
    void display();
};

void Queue ::push_front(int x){
    if(front == 0){
        cout<<"no";
    }
    else{
        front--;
        qu[front] = x;
    }
}

void Queue ::push_rear(int x){
    if (rear == size - 1)
        {
            cout<<"queue is full"<<endl;
        }
        else{
            qu[rear++] = x;
        }
}

int Queue ::pop_front(){
    int x = -1;
        if (front == rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            x = qu[front++];
        }
        return x;
}

int Queue ::pop_rear(){
    int x = -1;
    if(rear == front){
        cout<<"queue is empty";
    }
    else{
       x = qu[rear--];
    }
    return x;
}
void Queue :: display(){
    for (int i = front +1; i <= rear; i++)
    {
        cout<<qu[i]<<" ";
    }
        
        
}

int main(){
    Queue q(7);
    q.push_rear(2);
    q.push_rear(4);
    q.push_rear(6);
    q.push_rear(8);
    q.push_rear(1);
    q.display();
    q.pop_rear();
    q.display();
    return 0;
}