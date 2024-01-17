#include<iostream>
using namespace std;


class rectangle{

    private:
    int length;
    int breadth;

    public:
    rectangle (int l,int b)
    {
        length = l;
        breadth = b;
    }
    void channgeLength(int l){
        length = l;
    }
};

int main(){
    rectangle r(4,5);
    r.channgeLength(20);
    
    
    return 0;
}