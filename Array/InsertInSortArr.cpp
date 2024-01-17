#include<iostream>
using namespace std;

int main(){
    int arr[9] = {1,3,4,6,7,8};
    int key = 5;
    int length = 6;
    int i = 5;//length - 1;


    while(i>key){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = key;
    length++;;
    for (int i = 0; i <length; i++)
    {
        cout<<arr[i];
    }
    

    

    
    return 0;
}