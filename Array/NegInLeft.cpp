#include<bits\stdc++.h>
using namespace std;

int main(){
    int arr[10] = {6,3,8,-10,-5,-7,-9,12,-4,-2};
    int i = 0;
    int j = 9;
    while (i<j)
    {
        if(arr[i]<0){
            i++;

        }
        if (arr[j]>0)
        {
            j--;
        }
        if (arr[i]>0 && arr[j]<0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
        
    }
    sort(begin(arr),end(arr));
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
    
}