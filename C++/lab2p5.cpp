// Insett 

#include<iostream>

using namespace std;
void Insert(string a,string b)
{
    a.insert(9,b);
    cout<<"insert used: ";
cout<<a; }
int main() {
    string a("Beautiful world");
string b("Beautiful life");
    cout<<"String: "<<a<<endl;
    cout<<"String: "<<b<<endl;
    Insert(a,b);
    return 0;
}