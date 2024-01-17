#include<iostream>
using namespace std;
template <class T>
class rectangle{
    private:
    T l;
    T b;
    public:
    rectangle(T l,T b);
    T add();
    T sub();
};
template<class T>
rectangle<T> :: rectangle(T l,T b){
    this->l = l;// this is the pointer of current object.
    this->b = b;
}
template<class T>
T rectangle<T> :: add(){
    T v;
    v = l + b;
    return v;
}
template<class T>
T rectangle<T> :: sub(){
    T c;
    c = l - b;
    return c;
}

int main(){
    rectangle<int> ar(10,12);// current object is ar here.
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;

    rectangle<float> ar1(1.3,1.2);
    cout<<ar1.add()<<endl;
    cout<<ar1.sub()<<endl;
    
    return 0;
}