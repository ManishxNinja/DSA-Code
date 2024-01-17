#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *lchild;
    Node *rchild;
};
class node{
    public:
    Node *data;
    node *next;
};

class linkedlist{
    public:
    node *top;
    
    linkedlist(){
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

};

class tree{
    public:
    Node *root;
    tree(){
        root = NULL;
    }

    void insert(int key){
        Node *p,*r,*t;
        t = root;

        if(root == NULL){
            p = new Node();
            p->data = key;
            p->lchild = p->rchild = NULL;
            root = p;
            return;
        }
        while(t != NULL){
            r = t;
            if(key < t->data){
                t = t->lchild;

            }
            else if(key > t->data)
                t = t->rchild;
            else
                return;    
        }
        p = new Node();
        p->data = key;
        p->lchild = p->rchild = NULL;
        
        if(key < r->data){
            r->lchild = p;
        }
        else
            r->rchild = p;

    }
    void inorder(Node *p){
        if(p){
            inorder(p->lchild);
            cout<< p->data<<" ";
            inorder(p->rchild);
        }
    }

    Node* Inpre(Node *p){
        if(p && p->rchild != NULL){
            p = p->rchild;
        }
        return p;
    }
    Node* InSuc(Node *p){
        if(p && p->lchild != NULL){
            p = p->lchild;
        }
        return p;
    }
    int height(Node *p){

        int x,y;
        if(p == NULL){
            return 0;
        }
        x = height(p->lchild);
        y = height(p->rchild);
        return x > y?x + 1:y + 1;ertyuiop

    }

    Node* delete1(Node *p,int key){
        Node *q;
        if(p == NULL){
            return NULL;
        }
        if (p->lchild == NULL && p->rchild == NULL){
            if (p == root){
                root = NULL;
            }
            delete p;
            return NULL;
        }
        if(key < p->data){
            p->lchild = delete1(p->lchild,key);
        }
        else if(key > p->data){
            p->rchild = delete1(p->rchild,key);
        }
        else{
            
            if(height(p->lchild) > height(p->rchild)){
                q = Inpre(p->lchild);
                p->data = q->data;
                p->lchild = delete1(p->lchild,q->data);

            }
            else{
                q = InSuc(p->rchild);
                p->data = q->data;
                p->rchild = delete1(p->rchild,q->data);
            }
            
            
            
        }
        return p;
    }

    void making(){
        linkedlist s;

        int n;
        Node *p;
        cin>>n;
        cout<<endl;
        int arr[n];
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        int i = 0;

        Node *t;
        t = new Node();
        t->data = arr[0];
        t->lchild = t->rchild = NULL;
        root = t;
        p = root;
        i++;
        while (i < n)
        {
            if(arr[i] < p->data){
                t = new Node();
                t->data = arr[i++];
                t->lchild = t->rchild = NULL;
                p->lchild = t;
                s.push_back(p);
                p = t;


            }
            else{
                int n;
                if(s.top == NULL){
                    n = INT16_MAX;

                }
                else{
                    n = s.top->data->data;
                }
                if(arr[i] > p->data && arr[i] < n){
                    t = new Node();
                    t->data = arr[i++];
                    t->lchild = t->rchild = NULL;
                    p->rchild = t;
                    p = t;

                }
                else{
                    p = s.pop();
                }
            }
        }
        
    }


};

int main(){
    tree t;
    t.making();
    t.inorder(t.root);
    t.delete1(t.root,10);
    cout<<endl;
    t.inorder(t.root);
    
    return 0;
}