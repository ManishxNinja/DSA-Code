#include<iostream>
using namespace std;

int Binary(int arr[],int l,int n,int key){
    int h = n-1;

    while (h>=l)
    {
        int mid = (l+h)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else{
            if (arr[mid] > key)
            {
                h = mid-1;
            }
            else{
                l = mid+1;
            }
            
        }
        
    }
    return -1;
    

}

int main(){
    int n = 10;
    int l = 0;
    int arr[10] = {1,3,5,7,9,23,56,78,89,90};
    int key = 56;
    cout<<Binary(arr,l,n,key);
    return 0;
}