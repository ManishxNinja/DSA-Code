#include<iostream>
using namespace std;
// int fib(int n){
//     if (n<=1)
//     {
//         return n;
//     }
//     else{
//         return fib(n-1) + fib(n-2);
//     }
    
// }

// by iteration.
int fib(int n){
    int t0 = 0, t1 = 1,s;
    if (n<=1)
    {
        return n;
    }
    
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
    
}

int main(){
    // pass the term in function
    cout<<fib(2);
    return 0;
}