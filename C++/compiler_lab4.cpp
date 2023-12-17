#include <iostream>
using namespace std;
string str;
int A,B,len;
void fun10(int i)
{
B=1;
if (i == len)
{
return;
}
if (str[i] >= '0' && str[i] <= '9')
{
fun10(i + 1);
}
}
void fun9(int i)
{
B=0;
A=0;
if (str[i] >= '0' && str[i] <= '9')
{
fun10(i + 1);
}
}
void fun8(int i)
{
A=1;
if (i == len)
{
return;
}
else if (str[i] >= '0' && str[i] <= '9')
{
fun8(i + 1);
}
else if (str[i] == '.')
{
fun9(i + 1);
}
}
void fun7(int i)
{
if (str[i] >= '0' && str[i] <= '9')
{
fun8(i + 1);
}
else if (str[i] == '.')
{
fun9(i + 1);
}
}
void fun6(int i)
{
if (str[i] == '+' || str[i] == '-')
{
fun7(i + 1);
}
else if (str[i] >= '0' && str[i] <= '9')
{
fun8(i + 1);
}
else if (str[i] == '.')
{
fun9(i + 1);
}
}
void fun5(int i)
{
if (str[i] == '^')
{
fun6(i + 1);
}
}
void fun4(int i)
{
if (i ==len)
{
return;
}
else if (str[i] >= '0' && str[i] <= '9')
{
fun4(i + 1);
}
else if (str[i] == 'E')
{
fun5(i + 1);
}
}
void fun3(int i)
{
if (str[i] >= '0' && str[i] <= '9')
{
fun4(i + 1);
}
}
void fun2(int i)
{
if (i ==len)
{
return;
}
if (str[i] >= '0' && str[i] <= '9')
{
fun2(i+1);
}
else if (str[i] == '.')
{
fun3(i + 1);
}
else if (str[i] == 'E')
{
fun5(i + 1);
}
}
void fun1()
{
if (str[0] >= '0' && str[0] <= '9')
{
fun2(1);
}
else if (str[0] == '.')
{
fun3(1);
}
else if (str[0] == 'E')
{
fun5(1);
}
}
int main()
{
cin >> str;
len = str.length();
fun1();
if (A>0 || B>0)
{
cout << "valid" << endl;
}
else
{
cout << "invalid" << endl;
}
}