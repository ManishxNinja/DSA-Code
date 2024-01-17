#include<iostream>
using namespace std;

class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};





class queue
{
    public:
    int size;
    int front;
    int rear;
    Node **q;
    

    queue(int size){
        this->size = size;
        front = -1;
        rear = -1;
        q = new Node*[size];

    }

    void enqueue(Node* x){
        if (rear == size - 1)
        {
            cout<<"queue is full"<<endl;
        }
        else{
            q[rear++] = x;
        }
        
    }
    Node* dequeue(){
        Node *x = NULL;
        if (front == rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            x = q[front++];
        }
        return x;
        
    }
    int is_empty(){
        return front == rear;
    }


};

class Tree{
    public:
    Node *root;
    Tree(){
        root = NULL;
    } 
    void create();
    int countVal(Node *p);
};

void Tree :: create(){
    int x;
    Node *t,*p;
    queue q(20);
    root = new Node();
    cout<<"enter the root value"<<endl;
    cin>>x;
    cout<<endl;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while(!q.is_empty()){
        p = q.dequeue();
        cout<<"enter value of left child"<<" "<<p->data<<endl;
        cin>>x;
        if(x != -1){
            t = new Node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);

        }

        cout<<"enter value of right child"<<" "<<p->data<<endl;
        cin>>x;
        if(x != -1){
            t = new Node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);

        }

    }
}

int Tree :: countVal(Node *p){
    int x,y;
    if(p != NULL){
        x = countVal(p->lchild);
        y = countVal(p->rchild);
        return x + y + p->data;
    }
    return 0;
}

int main(){
    Tree t;
    t.create();
    cout<< t.countVal(t.root);
    return 0;
}