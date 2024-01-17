#include<iostream>
using namespace std;

class queue{
    private:
    int size;
    int front;
    int rear;
    int *q;

    public:
    queue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        q = new int[size];
    }
    void enqueue(int x){
        cout<<"enter the choice for enqueue";
        char x;
        cin>> x;
        cout<<endl;   
        if(x == 'f'){
            if (front == -1)
            {
                cout<<"does not able to add by front";
            }
            else{
                q[front] = x;
                front--;
            }
            
        }
        else{
            if (rear == size - 1)
            {
                cout<<"queue is full";
            }
            else{
                rear++;
                q[rear] = x;
            }
            
        }   
    }
    int dequeue(char o){
        int x = -1;
        if (front == rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else{

        
            if (o == 'r')
            {
                if (rear == -1)
                {
                    cout<<"does not able";
                }
                else{
                    q[rear--] = x;
                    return x;

                }
                
            }
            else{
                x = q[front++];
                return x;
                
            }

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
    
    return 0;
}