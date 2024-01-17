#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l, j = h;
    while (i < j) {
        while(arr[i] <= pivot){
            i++;
        
        }
        while(arr[j] > pivot){
            j--;
        
        }



        if (i < j) {
            swap(arr[i], arr[j]);
            
        }
        
    }
    swap(arr[l],arr[j]);
    return j;
}

void quickSort(int arr[], int l, int h) {
    if (l < h) {
        int j = partition(arr, l, h);
        quickSort(arr, l, j - 1);
        quickSort(arr, j + 1, h);
    }
}

int main() {
    int arr[] = {6, 3456, 5, 34, 575, 47, 3};
    quickSort(arr, 0, 6);

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
