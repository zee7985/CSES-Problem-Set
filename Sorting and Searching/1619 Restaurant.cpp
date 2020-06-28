#include<bits/stdc++.h> 
using namespace std; 
int main() 
{
    int n;
    cin>>n;
    vector<int> arr(n),leav(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>leav[i];
    }
    sort(arr.begin(),arr.end());
    sort(leav.begin(),leav.end());
	int maxCustomer = 1, ans = 1; 
	int i = 1, j = 0; 
	while (i < n && j < n) { 
        if (arr[i] <= leav[j]) { 
			maxCustomer++; 
			i++; 
		} 
		else if (arr[i] > leav[j]) { 
			maxCustomer--; 
			j++; 
		} 
		if (maxCustomer > ans) 
			ans = maxCustomer; 
	} 
    cout<<ans;
	return 0; 
} 
