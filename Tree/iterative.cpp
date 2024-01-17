#include<iostream>
using namespace std;

class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};

class node{
    public:
    Node* data;
    node *next;
};

class stack{
    public:
    node *top;
    
    stack(){
        top = NULL;
    }
    void push_back(Node* value){
        node *t;
        t = new node();
        if (t == NULL)
        {
            cout<<"stack is full"<<endl;
        }
        else{
            t->data = value;
            t->next = top;
            top = t;
        }
        
        
    }
    Node* pop(){
        Node* x;
        if (top == NULL)
        {
            cout<<"stack is empty"<<endl;
        }
        else{
            node*t;
            t = top;
            x = top->data;
            top = top->next;
            delete t;
        }
        return x;
    }
    int is_empty(){
        return top == NULL;
    }

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
    void ipreorder(Node *p);
    void iinorder(Node *p);
    void ipostorder(Node *p);
    void levelorder(Node *p);
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

void Tree :: ipreorder(Node *p){
    stack s;
    while(p != NULL || !s.is_empty()){

        if(p){
            cout<< p->data << " ";
            s.push_back(p);
            p = p->lchild;

        }
        else{
            p = s.pop();
            p = p->rchild;
        }
    }


}
void Tree :: iinorder(Node *p){
    stack s;
    while(p != NULL || !s.is_empty()){

        if(p){
            
            s.push_back(p);
            p = p->lchild;

        }
        else{
            p = s.pop();
            cout<< p->data << " ";
            p = p->rchild;
        }
    }
}
void Tree :: ipostorder(Node *p){
    stack s;
    int x;
    if(p){
        s.push_back(p);
        p = p->lchild;
    }
    else{
        x = (int)s.pop();
        if(x > 0){
            s.push_back(p);
        }

    } 

}
void Tree :: levelorder(Node *p){
    queue q(20);
    cout<< p->data<<" ";
    q.enqueue(p);
    while(!q.is_empty()){
        p = q.dequeue();
        if(p->lchild){
            cout<<p->lchild->data<<" ";
            q.enqueue(p->lchild);
        }
        if(p->rchild){
            cout<<p->rchild->data<<" ";
            q.enqueue(p->rchild);
        }
    }
}

int main(){
    Tree t;
    t.create();
    t.levelorder(t.root);
    return 0;
}