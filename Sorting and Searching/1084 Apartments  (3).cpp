#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
         cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i <= j) {
        if (a[j] + a[i] > p)
        { 
            j--;
            count++;
        }
        else
        { 
            i++; 
            j--; 
            count++;
        }
    }
    cout << count;
    return 0;
}
