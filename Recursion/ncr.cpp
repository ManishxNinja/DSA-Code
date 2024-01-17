#include<iostream>
using namespace std;

int fun(int n,int r){
    if (r == 0 || r == n)
    {
        return 1;
    }
    else{
        return fun(n-1,r-1) + fun(n-1,r);
    }
    
}

int main(){
    cout<<fun(3,3);
    return 0;
}