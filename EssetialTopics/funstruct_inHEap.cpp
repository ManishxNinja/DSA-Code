#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};

/* Here we created a structure in heap memory by dynami meory allocation, and access it using 
pointers.*/
struct rectangle* fun(){
    struct rectangle* p;
    p  = new rectangle;
    p->length = 12;
    p->breadth = 13;
    
    return p;

}

int main(){
    struct rectangle* ptr;
    ptr = fun();

    cout<<ptr->length<<" "<<"breadth"<<" "<<ptr->breadth<<endl;
    
    return 0;
}