#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long int n,x;
    cin>>n>>x;
    vector<long long int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int mx=0;
    for(auto c:a)
    {
        mx=max(mx,c);
    }
    long long int l=0,r=mx*x+1;
    long long int ans=0;
    while(l<=r)
    {
        long long int mid=l+(r-l)/2;
        long long int sum=0;
        for(auto c:a) {
            sum+=mid/c;
            if(sum>=x){
                r=mid-1;
                 ans=mid;
                 break;
            }
        }
        if(sum<x) l=mid+1; 
    }
 
    cout<<ans;
    return 0;
}
 
 
 
 
 
