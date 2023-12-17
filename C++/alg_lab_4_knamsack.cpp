#include<iostream>          
using namespace std;

int knapsack(int W, int wt[], int val[], int n){                             // We Define a function 
    int dp[n+1][W+1];                                                        // We Create a 2D array to store the maximum value 

    for(int i=0; i<=n; i++){                                                  // We Create Loop through all the items
        for(int w=0; w<=W; w++){                                              // We take the Loop through all the weight limits
            if(i==0 || w==0)                                                  // If there are no items or weight limit is 0
                dp[i][w] = 0;                                                 // then maximum value that can be obtained is 0
            else if(wt[i-1] <= w)                                             // If weight of current item is less than or equal to the current weight limit
                dp[i][w] = max(val[i-1] + dp[i-1][w-wt[i-1]], dp[i-1][w]);    // Choose the maximum of either including or 
             else                                                             // excluding the current item
                dp[i][w] = dp[i-1][w];                                        // If weight of current item is greater than current weight limit, 
        }                                                                     // then exclude the current item
    }

    return dp[n][W];                                                          // We return the maximum value
}

int main(){                 
    int val[] = {40, 60, 80};                                                // We Create an array of values for the items
    int wt[] = {15, 25, 35};                                                   // We Create an array of weights for the items
    int W = 50;                                                                 // Set the weight limit
    int n = sizeof(val)/sizeof(val[0]);                                         // Calculate the number of items

    int ans = knapsack(W, wt, val, n);                                          // Call the knapsack function to find the maximum value
    cout << " The Maximum value that can be Obtained = " << ans << endl;             // Print the result
    return 0;
}
