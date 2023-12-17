#include<iostream>
using namespace std;
void insertionSort(int arr[],int len)
{
    int item,j;
    for (int i = 1; i < len; i++)
    {
        item = arr[i]; 
        j = i-1;
        while (0<=j && arr[j] > item)  // Moving the elements of array 
                                        // that are greater than key
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = item;
    }
}

void printArr(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";         // Here we print sorted array by order
    }
    cout<<endl;
}

int main()
{
    int arr[] = {7, 4, 5, 2, 3, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,len);
    printArr(arr,len);
    return 0;
}
