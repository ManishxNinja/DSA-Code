#include<iostream>
using namespace std;

int main(){
    char str[6] = {'m','a','n','i','s','h'};
    int n = 6;
    for(int i = 0;i<n;i++){
        str[i] = str[i] - 32;

    }
    // do opposite in converting L\Uc to Uc.
    for(int i = 0;i<n;i++){
        cout<<str[i];
    }
    return 0;
}