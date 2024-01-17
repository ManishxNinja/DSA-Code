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