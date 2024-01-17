#include<iostream>
using namespace std;
typedef struct rectangle{
    int length;
    int breadth;
}hi;

// this structure object is made in stack memory.
// int main(){
//     hi *p;
//     p->breadth = 30;
//     p->length = 56;

//     cout<<p->length<,endl;
//     cout<<p->breadth<,endl;
    
//     return 0;
// }

// this structure object is made in heap memory.

int main(){
    hi *p;
    p = new rectangle;// this create the structure in heap memory.
    // for c language -> p = (hi*)malloc(sizeof(hi));

    p->breadth = 90;
    p->length = 89;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    
    return 0;
}