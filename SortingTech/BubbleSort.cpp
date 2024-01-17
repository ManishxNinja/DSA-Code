#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i = 0;i < n;i++){
        int flag = 0;
        for(int j = 0;j < n - 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }

        }
        if(flag == 0){
            return;
        }
    }

}

int main(){
    int arr[] = {5,7,4,8,9,3,1};
    int n = 7;
    BubbleSort(arr,n);
    for(int i = 0; i < 7;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}