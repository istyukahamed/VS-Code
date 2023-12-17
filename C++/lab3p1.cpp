// Bubble Sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
  for (int j = 0; j < size; ++j) {
      
    for (int i = 0; i < size - j; ++i) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}
void printArr(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}
int main() {
  int data[] = {2,4,5,8,9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  cout << "After The Sort :\n";  
  printArr(data, size);

  return 0;
}