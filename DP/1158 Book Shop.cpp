#include <bits/stdc++.h>
using namespace std;
//0/1 Knapsack

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> price(n), wt(n);
    for (int i =0;i<n;i++)
    {
        cin >> wt[i];
    }
    
    for (int i =0;i<n;i++)
    {
        cin >> price[i];
    } 
 
    vector<vector<int>> dp(n+1,vector<int>(W+1));

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(wt[i-1]<=j)
            {
                dp[i][j]=max(price[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][W];
    return 0;
}
