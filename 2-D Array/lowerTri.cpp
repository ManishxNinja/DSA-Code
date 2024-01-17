#include<iostream>
using namespace std;

class matrix{
    private:
    int *A;
    int n;

    public:
    matrix(int n){
        this->n = n;
        A = new int[n*(n+1)/2];

    }
    void set(int i,int j,int k);

    void get(int i,int j);
    void display(int m);

    
};

void matrix :: set(int i,int j,int k){
    if(i>=j){
        A[(i-1)*(i)/2 + (j-1)] = k;
    }
}

void matrix ::get(int i,int j){
    if(i>=j){
        cout<<A[(i-1)*(i)/2 + (j-1)];
    }
    else{
        cout<< 0;
    }
}

void matrix ::display(int m){
    int n = m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i>=j){
                cout<<A[(i-1)*(i)/2 + (j-1)]<<" ";}
            else{
                cout<< 0<<" ";
            }
        }
        cout<<endl;
        
    }
    
}

int main(){
    matrix lower(5);
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if(i>=j){
                lower.set(i,j,k);
                k++; 
            }
            else{
                lower.set(i,j,0);
            }

        
           
        }
        
    }
    lower.display(5);
    
    
    
    return 0;
}