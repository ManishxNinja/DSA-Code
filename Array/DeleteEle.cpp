#include<iostream>
using namespace std;
typedef struct mep{
    int arr[10];
    int length;
}arr1;
void del(arr1* b,int index){
    if (index<=b->length)
    {
        for (int i = index; i < b->length-1; i++)
        {
            b->arr[i] = b->arr[i+1];
        }
        b->length--;
        
    }
    
    

}

int main(){
    arr1 a = {{1,2,3,4,5,6},6};
    del(&a,4);
    for (int i = 0; i < a.length; i++)
    {
        cout<<a.arr[i]<<" ";
    }
    

    return 0;
}