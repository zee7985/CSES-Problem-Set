#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;

    vector<long  long> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   sort(v.begin(),v.end(),greater<int>());
    long long sum1=v[0];
    long long sum2=0;


    for(int i=1;i<n;i++)
    {
        if(sum1<=sum2)
        {
            sum1+=v[i];
        }
        else{
            sum2+=v[i];
        }
    }

    cout<<abs(sum1-sum2);
    return 0;

}
