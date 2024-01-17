#include<iostream>
using namespace std;

class term{
    public:
    int coff;
    int exp;
};
class poly{
    public:
    int n;// non-zero terms
    class term *terms;
};

void create(class poly *p){
    cin>>p->n;
    p->terms = new term[p->n];

    for (int i = 0; i < p->n; i++)
    {
        cin>> p->terms[i].coff;
        cin>> p->terms[i].exp;
    }
    


}
void display(class poly p){
    for (int i = 0; i < p.n; i++)
    {
        cout<< p.terms[i].coff <<"x"<< p.terms[i].exp<<"+";
        
    }


}

int main(){
    struct poly p;
    create(&p);
    display(p);
}