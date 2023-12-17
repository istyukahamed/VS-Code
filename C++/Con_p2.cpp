#include<iostream>
using namespace std;
int main()
{
    int A , B , C , K;
    cin >> K;
    for ( int i = 1; i <= K; i++ )
    {
        cin >> A >> B >> C;
        if (( A + B + C ) % 4 == 0)
        {
            cout << "Case " << i <<" : "<<" Peaceful" << endl;
        }
        else
        {
        cout << "Case " <<  i<<" : "<<" Fight" << endl;
        }
    }
    return 0;
}