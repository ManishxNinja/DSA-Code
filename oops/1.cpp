#include<iostream>
using namespace std;

class complex{
    public:

    int r;
    int a;
    complex(){
        r = 0;
        a = 0;
    }

    complex(int s,int b){
        r = s;
        a = b;
    }
    complex operator +(complex &obj){
        complex res;
        res.r = r + obj.r;
        res.a = a + obj.a;
        return res;
        
    }
    void display(){
        cout<<r<< " "<< a;
    }

};

int main(){
    complex c1(10,12);
    complex c2(13,14);

    complex c3 = c1 + c2;
    c3.display();

    
    return 0;
}
