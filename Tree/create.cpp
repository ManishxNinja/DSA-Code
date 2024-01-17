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
    void preorder(Node *p);
    void inorder(Node *p);

    bool search(Node *root,int key){
        if (root == NULL)
        {
            return false;
        }
        
        if(key == root->data){
            return true;
        }
        else if(key > root->data){
            return search(root->rchild,key);
        }
        else{
            return search(root->lchild,key);
        }
        return false;


    }
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

void Tree :: preorder(Node *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);


    }
}
void Tree :: inorder(Node *p){
    if(p){
        inorder(p->lchild);
        cout<< p->data<<" ";
        inorder(p->rchild);
    }
}


int main(){
    Tree w;
    w.create();
    cout<<w.search(w.root,15);
    return 0;

}