#include<iostream>
using namespace std;

double e(int x,double n){
    // by loop.
    double s = 1;
    double num = 1;
    double den = 1;

    
    for (int i = 1; i <= n ; i++)
    {
        // int a = (double)n;
        num *= x;
        den *= i;  
        s += num/den;
    }

    // by recursion.
    // if (n == 0)
    // {
    //     return s;
    // }

    // s = 1 + x*s/n;
    // return e(x,n-1);
    
    return s;

}

int main(){
    cout<<e(1,10);
    return 0;
}