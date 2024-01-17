#include<iostream>
using namespace std;
typedef struct array{
    int arr[5];
    int length;
}w;
int linear_search(w arr2,int key){
    for (int i = 0; i <arr2.length ; i++)
    {
    
        if (key == arr2.arr[i])
        {
            return i;
            
        }
    }
    return -1;

}
int main(){
    w arr1 = {{1,2,3,4,5},5};
    int key = 4;
    cout<<"key at index"<<linear_search(arr1,key);
    
    return 0;
}