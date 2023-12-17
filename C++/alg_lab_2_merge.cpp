#include <iostream>
using namespace std;
int sorted_arr[100];
void addMerge(int arr[], int left, int mid, int right)
{
    int  i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            sorted_arr[k++] = arr[i++];
        }
        else
        {
            sorted_arr[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        sorted_arr[k++] = arr[i++];
    }
    while (j <= right)
    {
        sorted_arr[k++] = arr[j++];
    }

    for (int i = 0; i < right+1; i++)
    {
        arr[i] = sorted_arr[i];
    }
}

void MergeSort(int arr[], int left, int right)
{
    int mid;
    if (left < right)
    {
         mid = (left + right) / 2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        addMerge(arr, left, mid, right);
    }
}

int main()
{
    
    int arr[] = {7,6, 5, 4, 3, 2, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, 0, len-1);
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}