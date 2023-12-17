#include <iostream>
using namespace std;

void swap(int *x, int *y)                     // Here we are swapping two elements 
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


int partition(int arr[], int low, int high)    // We are taking the last element as pivot,
{                                              // places the pivot element at its correct
                                               // position in sorted array
    int pivot = arr[high];                     // The pivot point
    int i = (low - 1);                        
    for (int j = low; j <= high - 1; j++)
    {                                          // If the pivot is bigger than current element 
        if (arr[j] < pivot)
        {
            i++;                               // The increment of value
            swap(&arr[i], &arr[j]);            // Here we are swapping two values
        }
    }
    i++;
    swap(&arr[i], &arr[high]);
    return i;
}

void quickSort(int arr[], int low, int high)  // The main function that implements QuickSort
{                                              
    if (low < high)
    {
        int n1 = partition(arr, low, high);    // n1 is partitioning index from other value
        quickSort(arr, low, n1 - 1);           // Separately sorting elements
        quickSort(arr, n1 + 1, high);
    }
}

void printArray(int arr[], int len)            // We are printing the sorted array
{
    int i;
    for (i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {80, 86, 20, 41, 35, 78};         // We are taking input unsorted values
    int len = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, len - 1);
    cout << "The sorted values : ";                     // We are printing the sorted values
    printArray(arr, len);
    return 0;
}
