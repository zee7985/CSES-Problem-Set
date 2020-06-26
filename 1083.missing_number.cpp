//https://cses.fi/problemset/task/1083
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;s
    set<int> mp;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp.insert(arr[i]);
    } 

    for(int i=1;i<=n;i++)
    {
        if(mp.find(i)==mp.end())
        {
            cout<<i;
        }
    }
    return 0;
}