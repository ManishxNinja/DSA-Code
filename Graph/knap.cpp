#include<bits/stdc++.h>
using namespace std;

void knapsack(int wt[],int val[],int n,int W){
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int i = 1;i <=n;i++){
        for(int j = 1;j <=W;j++){
            if(wt[i - 1] > j){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j],val[i - 1] + dp[i -1][j - wt[i - 1]]);
            }

        }
    }
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= W;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"max profit"<<dp[n][W];
}


int main(){
    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};

    int n = 4;
    int W = 7;
    knapsack(wt,val,n,W);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
//The time complexity of the provided code is O(n * W), where "n" is the number of items and "W" is the maximum weight capacity of the knapsack.

// KS(i, w) = 0 if i = 0 or w = 0
// KS(i, w) = KS(i-1, w) if wi > w
// KS(i, w) = max(val[i] + KS(i-1, w-wi), KS(i-1, w)) otherwise


// void Knapsack(int wt[], int val[], int n, int W) {
//     vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= W; j++) {
//             if (wt[i-1] > j) {
//                 dp[i][j] = dp[i-1][j];
//             } else {
//                 dp[i][j] = max(val[i-1] + dp[i-1][j - wt[i-1]], dp[i-1][j]);
//             }
//         }
//     }

//     cout << "Max Profit: " << dp[n][W] << endl;
// }

// int main () {
//     int wt[] = {1, 3, 4, 5};
//     int val[] = {1, 4, 5, 7};
//     int n = 4;
//     int W = 7;
//     Knapsack(wt, val, n, W);
//     return 0;
// }