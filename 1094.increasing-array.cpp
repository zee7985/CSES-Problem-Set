//https://cses.fi/problemset/task/1094
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long  sum = 0;
  int a, b;
  cin >> a;
  for (int i = 1; i < n; i++) {
    cin >> b;
    if (b < a) 
    {
        sum += a - b;
    }
    else
    {
        a = b;
    } 
  }
  cout << sum << endl;
}