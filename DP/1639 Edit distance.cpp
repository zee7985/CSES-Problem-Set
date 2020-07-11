#include <iostream>
using namespace std;
int main() {

    string str1,str2;
    cin>>str1>>str2;
    int m=str1.length();
    int n=str2.length();
    int dp[m + 1][n + 1]; 
  
    for(int i = 0; i <= m; i++) { 
        for(int j = 0; j <= n; j++) { 
            if (i == 0)
            { 
                dp[i][j] = j;
            } 
            else if (j == 0) 
            {
                dp[i][j] = i; 
            }
            else if (str1[i - 1] == str2[j - 1])
            { 
                dp[i][j] = dp[i - 1][j - 1]; 
            }
            else
            {
               dp[i][j] = 1 + min(dp[i][j - 1],min(dp[i - 1][j],dp[i - 1][j - 1])); 
            }
        } 
    } 
  
    cout<<dp[m][n];
    return 0; 
} 

