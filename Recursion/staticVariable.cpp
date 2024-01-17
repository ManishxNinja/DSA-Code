#include<iostream>
using namespace std;

int fun(int n){
    static int d = 0;// static variable stored in code section, not in stack.
    if (n>0)
    {
        d++;
        return fun(n-1)+d;
    }
    return 0;
    
}

int main(){
    int x;
    cin>>x;
    cout<<fun(x);
    return 0;
}