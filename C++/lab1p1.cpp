//  Linear Search 

#include<iostream>
using namespace std;
int main()
{
int arr[100],n,count=0,sear,index=0;
cout<<"How many element do you need: ";
cin>>n;
cout<<"Enter elements: "<<endl;
for (int i = 0; i < n; i++)
{
cin>>arr[i];
}
cout<<"which element do you want to search: ";
cin>>sear;
for (int i = 0; i < n; i++)
{
if(arr[i]==sear)
{
count++;
index=i;
}
}
if(count==0)
{
    cout<<"Not found"<<endl;
}
else
cout<<"value found in index "<<index<<endl;
return 0;
}