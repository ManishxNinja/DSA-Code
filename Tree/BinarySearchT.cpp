#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;

};

class Qnode{
    public:
    Node *data;
    Qnode *next;

    Qnode(Node *x){
        data = x;
        next = NULL;
    }

};

class queue{
    private:

    Qnode *front;
    Qnode *rear;

    public:
    queue(){
        front = NULL;
        rear = NULL;
    }
    void enquque(Node *x){
        Qnode *newnode = new Qnode(x);
        if(rear == NULL){
            front  = rear = newnode;
        }
        else{
            rear->next = newnode;
            rear = newnode;
        }
    }

    Node* dequeue(){
        if(front == NULL){
            cout<<"queue is empty"<<endl;
            return NULL;
        }
        Node* x = front->data;
        Qnode* temp = front;
        front = front->next;
        delete temp;
        return x;
    }
    bool is_empty(){
        return front == NULL;
    }
    

};

class tree{
    public:
    Node *root;
    tree(){
        root = NULL;
    }
    void create(){
        int x;
        Node *t,*p;
        queue q;
        root = new Node();
        cout<<"enter the root value"<<endl;
        cin>>x;
        cout<<endl;
        root->data = x;
        root->lchild = root->rchild = NULL;
        q.enquque(root);

        while(!q.is_empty()){
            p = q.dequeue();
            cout<<"enter value of left child"<<" "<<p->data<<endl;
            cin>>x;
            if(x != -1){
                t = new Node();
                t->data = x;
                t->lchild = t->rchild = NULL;
                p->lchild = t;
                q.enquque(t);

            }

            cout<<"enter value of right child"<<" "<<p->data<<endl;
            cin>>x;
            if(x != -1){
                t = new Node();
                t->data = x;
                t->lchild = t->rchild = NULL;
                p->rchild = t;
                q.enquque(t);

            }

        }
    }

    
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

int main(){
    tree t;
    t.create();
    cout<<t.search(t.root,15);
    return 0;
}



