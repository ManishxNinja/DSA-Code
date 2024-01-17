#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;// we m,ade a refrence variable.
    // NOw a and r are same ,bec they have same memory allocation.
    cout<<a<<endl;
    cout<<r<<endl;

    return 0;
}