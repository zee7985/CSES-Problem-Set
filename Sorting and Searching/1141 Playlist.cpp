#include <bits/stdc++.h>
using namespace std;
// We use Set to store the characters in current window [i, j) (j=i initially).
//  Then we slide the index j to the right. If it is not in the HashSet, we slide j further. 
//  Doing so until s[j] is already in the HashSet. At this point, we found the maximum size of 
//  substrings without duplicate characters start with index i. If we do this for all i, we get our answer.
int main() {
    int n;
    cin>>n;

    set<int> s;
    int max_=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=0;
    while(i<n && j<n)
    {
        if(s.find(arr[j])==s.end())
        {
            s.insert(arr[j]);
            j++;
            max_=max(max_,j-i);
        }
        else{
            s.erase(arr[i]);
            i++;
        }
    }
    cout<<max_;
    return 0;
}
