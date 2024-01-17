#include<iostream>
using namespace std;
template <class T>
class fun{
    private:
    T* a;
    T* b;
    T size;
    T length;

    public:
    fun(T arr[],T arr1[],int len,int siz){
        a = arr;
        b = arr1;
        length = len;
        size = siz;
    }
    int unionnn();
    T interse();
};

template <class T>
int fun <T> :: unionnn(){
    int c = length+length;
    int i = 0; int j = 0,k = 0;
    int* A = new int[c];
    while (i<length&&j<length)
    {
        if (a[i]<b[j])
        {
            A[k] = a[i];
            k++;
            i++;
        }
        else if (b[j]<a[i])
        {
            A[k++]  = b[j++];
        }
        else{
            i++;
            j++;
        }
        
        
    }
    if(i<j){
        for (int r = i; r < length; r++)
        {
            A[k++] = a[r];
        }
        
    }
    else{
        for (int r = j; r < length; r++)
        {
            A[k++] = b[r];
        }

    }
    for (int i = 0; i < k; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    return 0;
    


}

template <class T>
T fun <T> :: interse(){
    int c = length+length;
    int i = 0; int j = 0,k = 0;
    int* A = new T[c];
    while (i<length&&j<length)
    {
        if (a[i]<b[j])
        {
            i++;
        }
        else if (b[j]<a[i])
        {
            J++;
            
        }
        else{
            A[k++] = a[i];
            i++;
            j++;
            
        }
        
        
    }
    for (int i = 0; i < k; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

int main(){
    int length = 6;
    int arr3[6] = {1,4,6,8,9,10};
    int brr[6] = {2,3,7,8,9,11};
    fun<int> crr(arr3,brr,length,6);
    crr.unionnn();
    crr.interse();
    

    
    return 0;
}