#include<iostream>
using namespace std;

class diagonal{
    private:
        int n;
        int* A;
    public:
        diagonal(){
            n =2;
            A = new int[n];
        }
        diagonal(int n){
            this->n = n;
            A = new int[n];

        }
        void set(int n,int i , int no,int j){
            if(i == j && i<=n){
                A[i-1] = no;
 
            }
        }
        int get(int i);


};


int diagonal ::get(int i ){
    if(i<=n){
        return A[i-1];

    }
}

int main(){
    diagonal d(5);
    d.set(5,1,1,1);
    d.set(5,2,2,2);
    d.set(5,3,3,3);
    d.set(5,4,4,4);
    d.set(5,5,5,5);

    cout<<d.get(1);
    return 0;
}