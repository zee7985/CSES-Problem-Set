#include<bits/stdc++.h>
using namespace std;
//map solution -O(nlogn)

//O(n) -better two pointer approach
int main(){
        long long int n,sum;
        cin>>n>>sum;
        vector<long long int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0,j=0;
        long long int val = 0;
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            val += a[i];
            while(val>sum  && j<n){
                val -= a[j];
                j++;
            }
            if(val==sum){
                ans++;
            }
        }
    cout<<ans;
    return 0;
}