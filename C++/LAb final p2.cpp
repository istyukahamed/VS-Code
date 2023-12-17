#include <iostream>
using namespace std;
int search(string pat, string txt)
{
int j = 0;
int m = pat.length();
for (int i = 0; i < txt.length(); i++)
{
if (txt[i] == pat[j])
j++;
else
{
if (j > 0){
i--;
}
j = 0;
}
if (j == m)
return i - pat.length() + 1;
}
return -1;
}
int main()
{
string txt = "ABAACAADAABAAABAA" ;
string pat = "AABA" ;
cout << "Pattern found at index : "<< search(pat,txt) << endl; 
return 0;
}