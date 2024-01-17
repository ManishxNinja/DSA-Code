#include<bits/stdc++.h>
using namespace std;
# define size 10
int hash1(int key){
    return key%size;
}
int probe(int index,int a[]){

    int i = 0;
    while(a[(index + i)%size] != 0){
        i++;
    }
    return (index + i)%size;
}

void insert(int key,int a[]){
    int index = hash1(key);
    if(a[index] != 0){
        index = probe(index,a);
    }
    a[index] = key;
}

int main(){
    int HTabale[10] = {0};
    insert(45,HTabale);
    insert(75,HTabale);
    insert(46,HTabale);
    insert(74,HTabale);
    insert(28,HTabale);

    for(int i =0;i < 10;i++){
        cout<< HTabale[i]<<endl;
    }


    
    return 0;
}