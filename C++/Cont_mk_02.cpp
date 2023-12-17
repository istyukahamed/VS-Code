#include<iostream>
using namespace  std;
int main()
{
    int a,b,c,i,t;
    int ar[5];

    cin>>a>>b>>c;

    ar[0]=a+b*c;
    ar[1]=a*(b+c);
    ar[2]=a*b*c;
    ar[3]=(a+b)*c;
    ar[4]=a+b+c;

    int max;
    max =ar[0];

    for ( i=1; i<5; i++)
    {
        if(max<ar[i])
        {
            t=max;
            max=ar[i];
            ar[i]=t;
        }
    }
    cout<<max<<endl;

    return 0;
}
