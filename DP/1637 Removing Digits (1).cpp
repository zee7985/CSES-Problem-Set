//Greedy will also work
#include <bits/stdc++.h>
using namespace std;

//1.
// int main() {
//   int n;
//   cin >> n;
//   vector<int> dp(n+1,1e9);
//   dp[0] = 0;
//   for (int i = 0; i <= n; i++) {
//     for (char c : to_string(i)) {
//       dp[i] = min(dp[i], dp[i-(c-'0')]+1);
//     }
//   }
//   cout << dp[n] << endl;
// }

//2.
int main() {
  int n;
  cin >> n;
  vector<int> dp(n+1,1e9);
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
      int temp=i;
      while(temp)
      {
        int dig=temp%10;
        dp[i] = min(dp[i], dp[i-dig]+1);
        temp/=10;
    }
  }
  cout << dp[n] << endl;
}
