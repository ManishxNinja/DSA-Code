#include<iostream>
using namespace std;

void per(char s[],int k ){
    static int A[10] = {0};
    static char res[10];
    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';
        cout<<res<<endl;
    }
    else{
        for ( i = 0;s[i]!= '\0'; i++)
        {
            if (A[i] == 0)
            {
                res[k] = s[i];
                A[i] = 1;
                per(s,k+1);
                A[i] = 0;
            }
            
        }
        
    }
    
}

int main(){
    int k = 0;
    char s[10] = "ABC";
    per(s,k);
    return 0;
}