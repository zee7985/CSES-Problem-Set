#include <bits/stdc++.h>
using namespace std;
long long subarraySum(vector<long long>& nums, long long k) {
         
        //O(n)
        long long currSum=0;
        map<long long,long long>mp;
        mp[1]=0;
        long long n=nums.size();
        long long count=0;
        for(long long i=0;i<n;i++)
        {
            currSum+=nums[i];
        
            if(currSum==k){
                //cout<<"SubArray "<<0<<" to "<<i<<endl;
                count++;
            }
    
    //map-> key = prefix sum and value = its index
    //If there is any key in the map which is equal 
    // to currSum – sum then prlong long that the subarray with given 
    //sum is from mp[currSum-sum] to i
            if(mp.find(currSum-k)!=mp.end())
            {
            //cout<<"SubArray "<<mp[currSum-sum]+1<<" to "<<i<<endl;
            //return;
            count += mp [currSum - k];
            }
            mp[currSum]++;
        }
        //cout<<"No SubArray Exist";
        return count;
}
int main() {
    long long n,x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<subarraySum(a,x);
    return 0;
}