#include<bits/stdc++.h>
using namespace std;
void SelectSort(int arr[]){
    int n = 7;
    int j,k;
    for(int i = 0;i < n;i++){
        for(int j = k = i;j < n;j++){
            if(arr[k] > arr[j]){
                k = j;
            }
        }
        swap(arr[i],arr[k]);
    }
}

int main(){
    int arr[] = {4,3,6,32,2,6,8};
    SelectSort(arr);
    for(int i = 0;i < 7;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}