#include <iostream>
using namespace std;
void heapify(int arr[], int x, int i)            // To heapify a subtree rooted with node i
{                                                // The x is size of heap                                                 
int largest = i;                                 // Initialize largest as root
int l = 2 * i + 1;                               // The left side = 2*i + 1
int r = 2 * i + 2;                               // The right side = 2*i + 2
if (l < x && arr[l] > arr[largest])              // If left child is larger than root
largest = l;                                     
if (r < x && arr[r] > arr[largest])              // If right child is larger than largest
largest = r;                                     
if (largest != i) {                              // If largest is not root
swap(arr[i], arr[largest]);
heapify(arr, x, largest);                        // Recursively heapify the affected
}
}
void heapSort(int arr[], int x)                  // Main function to do heap sort
{
for (int i = x / 2 - 1; i >= 0; i--)             // Build heap (rearrange array)
heapify(arr, x, i);                              // One by one extract an element from heap
for (int i = x - 1; i > 0; i--) {                // Move current root to end
swap(arr[0], arr[i]);                            
heapify(arr, i, 0);                              // call max heapify on the reduced heap
}
}
void printArray(int arr[], int x)                // A utility function to print array of size n
{
for (int i = 0; i < x; ++i)
cout << arr[i] << " ";
cout << "\n";
}
int main()
{
int arr[] = { 86, 75, 23, 52, 32, 11 };        // The input of unsorted values
int x = sizeof(arr) / sizeof(arr[0]);
heapSort(arr, x);
cout << "Sorted array is : ";                 // The output of sorted values
printArray(arr, x);
return 0;
}