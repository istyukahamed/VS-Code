#include<iostream>

using namespace std;

char S[100];
int c=0,l,i;
void fun1()
{
    if(S[i]>='a' && S[i]<='z')
    c++;
    else if(S[i]>='A' && S[i]<='Z')
    c++;
     else if(S[i]=='_')
     c++;
     else c=-1;

}
void fun2 ()
{
    if ( S[i]>='0'&& S[i]<='9')
    c++;
    else 
    fun1();
}
 int main() {
    cin>>S;
    l=strlen(S);
    for ( i = 0; i < l; i++)
    {
        if (i==0)
    fun1();
    else
    fun2();
    }
    if (l==c) 
    {
        cout << "valid" << endl;
    }
    else 
    cout << "invalid" <<endl;
    
    return 0;
}