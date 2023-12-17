#include <iostream>
using namespace std;

int main() {

    long long int num[10];
    long long temp=1;
    int i=0;
    while(temp != 0){
        cin >> temp;
        num[i] = temp;
        i++;
    }


    for(int x=0; x<i-1; x++){
        temp = num[x]%17;
        if(temp != 0){
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}