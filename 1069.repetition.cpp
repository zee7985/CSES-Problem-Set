//https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    long long max_=1;
    long long int ans=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            ans++;
        }
        else{
            ans=1;
        }
        max_=max(max_,ans);
    }
    cout<<max_;
    return 0;
}