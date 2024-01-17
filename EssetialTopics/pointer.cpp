#include<iostream>
using namespace std;
int main(){
    int* p;
    p = new int[7];// HEap memory is created.

    for (int i = 0; i < 7; i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p;// HEap memory successfully deleted.
    return 0;
    
}