#include<iostream>
using namespace std;
class dime{
    public:
    int k;
    int j;
    int elem;
};
class sparse{
    private:
    int m;
    int n;
    int num;
    dime *ele;
    public:

    sparse(int r,int c,int nonz){
        m = r;
        n = c;
        num = nonz;
        ele = new dime[num]; 
    }
    void create(){
        for (int i = 0; i < num; i++)
        {
            cin>>ele[i].k>>ele[i].j>>ele[i].elem;
        }
        
    }
    void display(){
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i == ele[k].k && j == ele[k].j){
                    cout<< ele[k++].elem;
                }
                else{
                    cout<< "0";
                }
            }
            cout<<endl;
            
        }
        
    }
};



int main(){
    sparse njvjrf(5,5,5);

    
    
    return 0;
}