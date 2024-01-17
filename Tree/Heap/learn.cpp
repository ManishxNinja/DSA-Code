#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    void insert(int A[],int n){
        int i = n,temp;
        temp = A[i];
        while(i > 1 && A[i/2] < temp){
            A[i] = A[i/2];
            i /= 2;
        }
        A[i] = temp;


    }
    int del(int A[],int n){
        int i,j,val;
        int val = A[i];
        A[i] = A[n];
        A[n] = val;
        i = 1;
        j = 2*i;

        while(j < n - 1){
            if(A[j+1] > A[j]){
                j++;
            }
            if(A[i] < A[j]){
                int temp = A[j];
                A[j] = A[i];
                A[i] = A[j];
                i = j;
                j = j * 2;

            }
            else{
                break;
            }
        }
        return val;

    }
    void CreateHeap(){

    }

};


int main(){
    int H[] = {0,10,20,30,25,5,40,35};
    Heap k;
    for(int i = 0; i <= 7;i++){
        k.insert(H,i);
    }
    for(int i = 1;i <= 7;i++){
        cout<< H[i] << " ";
        
    }
    return 0;
}