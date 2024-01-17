#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i = 1;i < n;i++){
        int j = i - 1;
        int x = arr[i];
        while(j > -1 && arr[j] > x){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
        
    }

}

int main(){
    int arr[] = {5,7,4,8,9,3,1};
    int n = 7;
    InsertionSort(arr,n);
    for(int i = 0; i < 7;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}