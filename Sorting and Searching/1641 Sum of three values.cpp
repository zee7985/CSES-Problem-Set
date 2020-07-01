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
    int j = n-1 ;
    int k=0;
 
    while (i < j) {
        k=i+1;
        j=n-1;
        while(k<j)
        {
            if (a[j].first + a[k].first +a[i].first  == p)
            {
            cout<<a[k].second<<" "<<a[j].second<<" "<<a[i].second<<" ";
            return 0;
            // i++;
            // j--;
            }
            else if(a[j].first + a[i].first + a[k].first> p)
            { 
                j--; 
            }
            else{
                k++;
            }
        }
        i++;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
    