// Selection Sort 

#include<iostream>
using namespace std;
int main() {
 int i,j,n,m,temp;
 cout<<" The Array size : ";
 cin>>n;
 int arr[n];
 cout<<" The Array elements : ";
 for( i=0; i<n; i++) {
 cin>>arr[i];
 }
 for(i=0 ; i<n; i++) {
 m=i;
 for(j=i+1; j<n; j++)
 if(arr[m]>arr[j]) {
 m=j;
 temp=arr[m];
 arr[m]=arr[i];
 arr[i]=temp;
 }
 }
 cout<<"After the Sorting of Array : ";
 for(i=0; i<n; i++){
 cout<<arr[i]<<" ";
 }
}