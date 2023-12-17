#include<iostream>
using namespace std;
int main()
{
    int A , B , C , T;
    cin >> T;
    for ( int i = 1; i <= T; i++ )
    {
        cin >> A >> B >> C;
        if (( A + B +C ) % 3 == 0)
        {
            cout << "Case " << i <<" : "<<"Peaceful" << endl;
        }
        else
        {
        cout << "Case " << i <<": "<<"Fight" << endl;
        }
    }
    return 0;
}