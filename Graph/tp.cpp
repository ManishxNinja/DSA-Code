#include <bits/stdc++.h>
using namespace std;

// Heap Sort Time Complexity: O(nlogn) in Best, Average, and Worst Case
// Heapify Time Complexity: O(logn) in Best, Average, and Worst Case

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for (int i = n / 2 - 1; i >= 0; i--)
    // {
    //     heapify(arr, n, i);
    // }
    heapSort(arr, n);
    for (int ele : arr)
        cout << ele << " ";
    return 0;
}