#include<iostream>
using namespace std;

int main(){
    int* a[3];
    a[0] = new int[3];
    a[1] = new int[3];
    a[2] = new int[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;

    int** b;
    b = new int*[3];

    b[0] = new int[3];
    b[1] = new int[3];
    b[2] = new int[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
        
    }

    
    
    return 0;
}