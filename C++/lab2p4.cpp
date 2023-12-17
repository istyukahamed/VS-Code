// Sub - String 

#include<iostream>

using namespace std;
int main()
{
    string s1,s2,s3;
    s1="I am a student";

    s2=s1.substr(7,7);
    s3=s1.substr(18,4);
    cout<<s2<<endl;
    cout<<s3<<endl;
    return 0;
}