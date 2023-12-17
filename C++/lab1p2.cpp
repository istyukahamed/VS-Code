// Binary Search

#include<iostream>
using namespace std;
int main()
{
int arr[100],left,right,mid,n,x,cnt=0;
cout<<"How many element do you need: ";
cin>>n;
left=0;
right=n-1;
cout<<"Enter elements"<<endl;
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
cout<<"which element do you want to search: ";
cin>>x;
while (left<=right)
{
mid=(left+right)/2;
if (arr[mid]==x)
{
cout<<"The element found on index "<<mid<<endl;
}
if (arr[mid]<x)
{
left=mid+1;
}
else
{
right=mid-1;
}
}
return 0;
}