#include<bits\stdc++.h>
using namespace std;

struct insert{
    int A[20];
    int size;
    int length;

};
void insert1(struct insert *arr,int index,int value){

    int a = index; 
    if (index>= 0 && index<arr->length )
    {
        for (int i = arr->length ; i >index; i--)
        {
            arr->A[i] = arr->A[i-1];

        }
        arr->A[index] = value;
        arr->length++;
        
        
        
    }
    

}

int main(){
    struct insert arr={{1,2,3,4,5},20,6};
    insert1(&arr,3,10);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
    
}