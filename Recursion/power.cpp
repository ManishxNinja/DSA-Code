#include<iostream>
using namespace std;
// int pow(int n,int m){
//     if (m == 0)
//     {
//         return 1;
//     }
//     return pow(n,m-1)*n;
    
// }
// power function short
int pow(int n,int m){
    if (m == 0)
    {
        return 1;
    }
    if(m%2 == 0){
        return pow(n*n,m/2);
    }
    else{
        return n*pow(n*n,(m-1)/2);
    }
}
int main(){
    int x;
    cin>>x;
    cout<<"enter power"<<endl;
    int power;
    cin>>power;
    cout<<pow(x,power);
    return 0;
}