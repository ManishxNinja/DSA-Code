#include<iostream>
using namespace std;
int * fun(int size){
    int* p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i+1;
    }
    cout<<p<<endl;

    return p;// returning a pointer of array.

}

int main(){
    int* ptr,sz = 5;
    ptr = fun(sz);
    cout<<&ptr[0]<<endl;
    for (int i = 0; i <sz ; i++)
    {
        ptr[i];
    }
    
    
    return 0;
}