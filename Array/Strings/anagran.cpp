#include<iostream>
using namespace std;

int main(){
    char str[] = "listen";
    char arr[] = "siilent";

    int a[26];
    for(int i = 0;i<26;i++){
        a[i] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        a[str[i] - 97]++;
    }

    for (int i = 0; arr[i] != '\0'; i++)
    {
        a[str[i] - 97]--;
        if (a[str[i] - 97]<0)
        {
            cout<<"not anagram";
            return 0;

        }
        
    }
    cout<<"Anagram"; 

    return 0;
}