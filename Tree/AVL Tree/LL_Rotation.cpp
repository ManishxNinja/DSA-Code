#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int height;
    Node* left;
    Node* right;
}*root = NULL;

int NodeHeight(Node* p){
    int h1,h2;
    h1 = p && p->left?p->left->height:0;
    h2 = p && p->right?p->right->height: 0;
    return h1>h2?h1 + 1:h2 + 1;
}

int balanceFactor(Node* p){
    int h1,h2;
    h1 = p && p->left?p->left->height:0;
    h2 = p && p->right?p->right->height:0;
    return h1 - h2;

}
Node *LLRotation(Node *p){
    Node* pL = p->left;
    Node* pLR = pL->right;

    pL->right = p;
    p->left = pLR;

    p->height = NodeHeight(p);
    pL->height = NodeHeight(pL);

    if(p == root){
        root = pL;
    }
    return pL;
}
Node *LRRotation(Node *p){
    Node* pL = p->left;
    Node* pLR = pL->right;

    pL->right = pLR->left;
    p->left = pLR->right;

    pLR->left = pL;
    pLR->right = p;

    pL->height = NodeHeight(pL);
    p->height = NodeHeight(p);
    pLR->height = NodeHeight(pLR);
    

    if(root == p){
        root = pLR;
    }
    return pLR;

}
Node *RLRotation(Node *p){
    Node* pR = p->right;
    Node* pRL = pR->left;

    p->right = pRL->left;
    pR->left = pRL->right;

    if(root == p){
        root = pRL;
        return pRL;
    }

}

Node *RRRotation(Node *p){

    Node* pR = p->right;
    Node* pRL = pR->left;

    p->right = pRL;
    pR->left = p;

    if(p == root){
        root = pR;
    }
    return pR;

}
Node* Inpre(Node *p){
        if(p && p->right != NULL){
            p = p->right;
        }
        return p;
    }
Node* InSuc(Node *p){
    if(p && p->left != NULL){
        p = p->left;
    }
    return p;
}

Node *RInsert(Node *p,int key){
    Node *t = NULL;
    if(p == NULL){
        t = new Node();
        t->data = key;
        t->height = 1;
        t->left = t->right = NULL;
        return t;
    }
    if(key < p->data){
        p->left = RInsert(p->left,key);
    }
    else if(key > p->data){
        p->right = RInsert(p->right,key);
    }
    p->height = NodeHeight(p);

    if(balanceFactor(p) > 1 && balanceFactor(p->left) == 1){
        return LLRotation(p);
    }
    else if(balanceFactor(p) > 1 && balanceFactor(p->left) == -1){
        return LRRotation(p);
    }
    else if(balanceFactor(p) < -1 && balanceFactor(p->right) == -1){
        return RRRotation(p);
    }
    else if(balanceFactor(p) < -1 && balanceFactor(p->right) == -1){
        return RLRotation(p);
    }
    else{
        return p;
    }
}
   Node* delete1(Node *p,int key){
        Node *q;
        if(p == NULL){
            return NULL;
        }
        if (p->left == NULL && p->right == NULL){
            if (p == root){
                root = NULL;
            }
            delete p;
            return NULL;
        }
        if(key < p->data){
            p->left = delete1(p->left,key);
        }
        else if(key > p->data){
            p->right = delete1(p->right,key);
        }
        else{
            
            if(NodeHeight(p->left) > NodeHeight(p->right)){
                q = Inpre(p->left);
                p->data = q->data;
                p->left = delete1(p->left,q->data);

            }
            else{
                q = InSuc(p->right);
                p->data = q->data;
                p->right = delete1(p->right,q->data);
            }
            
            
            
        }
        p->height = NodeHeight(p);

        if(balanceFactor(p) > 1 && balanceFactor(p->left) >= 0){
            return LLRotation(p);
        }
        else if(balanceFactor(p) > 1 && balanceFactor(p->left) < 0){
            return LRRotation(p);
        }
        else if(balanceFactor(p) < -1 && balanceFactor(p->right) <= 0){
            return RRRotation(p);
        }
        else if(balanceFactor(p) < -1 && balanceFactor(p->right) > 0){
            return RLRotation(p);
        }
        else{
            return p;
        }
    }

void display(Node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}



int main(){
    root = RInsert(root,15);
    RInsert(root,8);
    RInsert(root,20);
    RInsert(root,5);
    RInsert(root,12);

    display(root);

    delete1(root,20);
    cout<<endl;

    display(root);


    
    return 0;
}