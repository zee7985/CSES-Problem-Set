#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    vector<pair<int,int>> a(n);         // pair to store element and its index -because indexing will get disturbed while sorting
    for (int i = 0; i < n; i++)
    {
         cin >> a[i].first;
         a[i].second= i+1;
    }
    sort(a.begin(), a.end());
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j) {
        if (a[j].first + a[i].first == p)
        {
            cout<<a[i].second<<" "<<a[j].second;
            return 0;
            // i++;
            // j--;
        }
        else if(a[j].first + a[i].first> p)
        { 
            j--; 
        }
        else{
            i++;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}