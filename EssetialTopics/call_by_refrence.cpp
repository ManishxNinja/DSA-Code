#include<iostream>
using namespace std;
// Call BY refrence.
// CAll by refrence is not a good  process  as like.
// it is a direct as pass by value.


void sum(int &i,int &j){
    int temp = i;
    i = j;
    j = temp;

}

int main(){
    int a,b;
    a = 10;
    b = 12;
    sum(a,b);
    cout<<a<<endl;
    cout<<b<<endl;


    return 0;
}