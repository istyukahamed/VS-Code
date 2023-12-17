
#include<iostream>
using namespace std;

int lcs(string s1, string s2){              // We defines a function lcs that takes two string inputs
    int m = s1.size(), n = s2.size();       // We initializes variables m and n to the sizes of strings
    int dp[m+1][n+1];                       // We initializes a two-dimensional integer array dp of size

    for(int i=0; i<=m; i++){                 // starts a for-loop that iterates through the rows of dp from 0 to m
        for(int j=0; j<=n; j++){
            if(i == 0 || j == 0)             // checks if either the row or the column index is 0
                dp[i][j] = 0;                // if either index is 0, sets the corresponding element of dp to 0
            else if(s1[i-1] == s2[j-1])      // if the characters at position (i-1) in s1 and (j-1) in s2 are equal
                dp[i][j] = dp[i-1][j-1] + 1; // We sets the corresponding element of dp to the value of the diagonal element plus one
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); //sets the corresponding element of dp to the maximum value between the element
        }
    }

    return dp[m][n];                          //returns the element in the bottom-right corner of dp
}

int main(){
    string s1 = "DTEGIAK";
    string s2 = "JUWAIKF";

    int length = lcs(s1, s2);
    cout << "The Length of longest common Subsequence = " << length << endl;
    return 0;
}
