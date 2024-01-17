#include<iostream>
using namespace std;
class rectangle{
    private:
    int len;
    int bre;

    public:
    rectangle(int l,int b);
    int add();
    int sub();

    int get_length();
    int set_length(int le);
};

rectangle :: rectangle(int l,int b){
    len = l;
    bre = b;
}
int rectangle :: add(){
    int c;
    c = len + bre;
    return c;
} 
int rectangle :: sub(){
    int v;
    v = len - bre;
    return v;
}

int rectangle :: get_length(){
    return len;

}
int rectangle :: set_length(int le){
    len = le;
    return len;

}

int main(){
    rectangle r(1,8);
    cout<<r.add()<<endl;
    cout<<r.sub()<<endl;

    r.set_length(30);

    cout<<r.get_length()<<endl;

    
    return 0;
}