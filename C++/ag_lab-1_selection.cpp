#include <iostream>
using namespace std;
void swapping(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}
void selectionSort(int arr[], int arrSize)
{
    int minIndexValue, i, j;
    for (i = 0; i < arrSize - 1; i++)
    {
        minIndexValue = i;
       
        for (j = i + 1; j < arrSize; j++)
        {
            // find the minimum value element
            if (arr[j] < arr[minIndexValue])
                minIndexValue = j;
        }

        // swap the minimum value element
        
        if (minIndexValue != i)
        {
            swapping(&arr[minIndexValue], &arr[i]);
        }
    }
}
void printSortedArray(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ' ';
    }
}
int main()
{
    int arr[] = {86, 33, 62, 21, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, len);
    printSortedArray(arr, len);

    return 0;
}
