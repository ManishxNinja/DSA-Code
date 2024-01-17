#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
// call by value.
// int fun(struct rectangle r1){
//     r1.length = 20;
//     r1.breadth = 30;// there will be no change by this in actual parameters.
//     // because r1 has different memory allocation in (fun) function,it is pass_by_value.

// }


// int main(){
//     struct rectangle r;
//     r.length = 30;
//     r.breadth = 60;
//     fun(r);
//     cout<<r.length<<endl;
//     cout<<r.breadth<<endl;
    
//     return 0;
// }


// call by refrence.


// call_by_refrence using &,
// int fun(struct rectangle &r1){
//     r1.length = 20;
//     r1.breadth = 30;// NOW this change will affect the actual parameters.
//     /* because it is call by refrence , it does not have a seperate block of machine code
//     ,also it will be pasted at the place of function call*/
//     return 0;

// }


// int main(){
//     struct rectangle r;
//     r.length = 30;
//     r.breadth = 60;
//     fun(r);
//     cout<<r.length<<endl;
//     cout<<r.breadth<<endl;
    
//     return 0;
// }


// now we learn Call_by_address.


int fun(struct rectangle* r1){
    r1->length = 20;
    r1->breadth = 30;// there will be change by this in actual parameters.
    // because r1 has different memory allocation in (fun) function,it is not  pass_by_value.
    return 0;
}


int main(){
    struct rectangle r;
    r.length = 30;
    r.breadth = 60;
    fun(&r);
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    return 0;
}