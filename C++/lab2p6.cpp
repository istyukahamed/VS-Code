// Delete 

#include<iostream>

using namespace std;
void Dlt(string s1)
{
 s1.erase(4);
cout<<s1 << endl;
}
int main()
{
string s1("Istyuk Ahamed");
Dlt(s1);
return 0;
}