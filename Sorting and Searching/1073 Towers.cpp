//1.By vector
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
//     int n;
//     cin>>n;
//     vector<long long> arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     vector<long long> res;
//     int j=0;
//     for(int j=0;j<n;j++)
//     {
//         auto it=upper_bound(res.begin(),res.end(),arr[j]);
//         if(it==res.end())
//         {
//             res.push_back(arr[j]);
//         }
//         else{
//             *it =arr[j];
//         }
//     }
//     cout<<res.size();
//     return 0;
// }



//2.by set
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    multiset<int>s;
    int j=0;
    for(int j=0;j<n;j++)
    {
        auto it=s.upper_bound(arr[j]);
        if(it==s.end())
        {
            s.insert(arr[j]);
        }
        else{
            s.erase(it);
            s.insert(arr[j]);
        }
    }
    cout<<s.size();
    return 0;
}