#include<iostream>
using namespace std;

int main(){
    char str[] = "manishni";
    int h = 0,x = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        x = 1;
        x = x<<str[i] - 97;

        if ((x&h) > 0)
        {
            cout<<str[i]<<endl;

        }
        else{
            h = x|h;
        }
        
    }
    
    return 0;
}