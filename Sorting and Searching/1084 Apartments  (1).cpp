#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,m,k;
    cin>>n>>m>>k;
    vector<int > a(n);
    vector<int> b(m);
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for( int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b.begin(),b.end());
     int i=0;
     int j=0;
     int count=0;
    while(i!=n && j!=m)
    {
        if(a[i]-k <= b[j] &&  a[i] + k>= b[j])
        {
            count++;
            i++;
            j++;
        }
        else if(a[i]-k> b[j])
        {
            j++;
        }
        else if(a[i] +k< b[j])
        {
            i++;
        }
    }
    cout<<count;
}
