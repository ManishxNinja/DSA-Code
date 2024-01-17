#include<iostream>
using namespace std;

int main(){
    // only for 1 element missing.
    // from 1 to 6;
    int arr[5] = {1,4,5,6,7};

    // 1st-Approach

    // int sum = 0;
    // int s = 0;
    // for (int i = 1; i < 7; i++)
    // {
    //    sum+=i; 
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     s+= arr[i] ;
    // }
    // cout<<"missing"<<sum - s<<endl;

    // 2nd-Approach.

    // int diff = arr[0] - 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     while(arr[i] - i != diff)
    //     {
    //         cout<<"missing "<<i+diff<<endl;
    //         diff++;

    //     }
        
    // }

    // 3rd - Approach.

    // search max element and make a new array.
    int brr[8];
    for(int i = 0;i<8;i++){
        brr[i] = i;
    }
    int i = 0;
    while(i<5)
    {
        brr[arr[i]] = -1;
        i++;
    }
    for (int j = 1; j < 8; j++)
    {
        if(brr[j] != -1){
            cout<<"missing "<<j<<endl;
        }
    }
    
    

    

    
    
    return 0;
}