#include<iostream>
using namespace std;

int main(){
    char arr[20] = "Lokesh kaushik";
    int len = 0;
    for(int i = 0;arr[i]!= '\0';i++){
        len++;
    }
    for(int i = 0, j = len-1;i<j;i++,j-- ){
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 

    }
    cout<<arr;

    return 0;
}