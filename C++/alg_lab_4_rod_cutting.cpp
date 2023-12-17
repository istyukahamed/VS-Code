#include<iostream>
using namespace std;
int dp[100];
int pri[100];
int length;

int sol(int len)
{
    if(len<=0){
        return 0;
    }

    if(dp[len]!=-1)
    {
        return dp[len];
    }

    int mx=0;
    for(int i=1; i<=8 && (len-i)>=0; i++)
    {
        mx=max(mx,pri[i]+sol(len-i));
    }
    dp[len]=mx;
    return dp[len];
}
int main()
{
    int length;
    cout<< "Enter the size of the rod:"<<endl;
    cin>>length;
    for(int i=0; i<100; i++)
    {
        dp[i]=-1;
    }
    pri[1]=1;
    pri[2]=6;
    pri[3]=7;
    pri[4]=10;
    pri[5]=12;
    pri[6]=15;
    pri[7]=18;
    pri[8]=23;

    cout<< "The maximum value : "<<endl;
    int res=sol(length);
    cout<< res<<endl;
    return 0;
}
