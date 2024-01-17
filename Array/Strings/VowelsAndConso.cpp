#include<iostream>
using namespace std;

int main(){
    int vcount = 0;
    int ccount = 0;
    char str[20] = "Guddi Devi Kaushik";
    for (int i = 0; str[i]!= '\0'; i++)
    {
        if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vcount++;
            }
            else
            {
                ccount++;
            }
            
            
        }
        
    }
    cout<<vcount<<endl;
    cout<<ccount<<endl ;
    

    return 0;
}