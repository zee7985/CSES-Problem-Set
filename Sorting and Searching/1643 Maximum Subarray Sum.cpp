#include<bits/stdc++.h>
using namespace std; 

void maxSubArraySum(vector<long long int> a,int n) 
{ 
	long long int max_so_far = INT_MIN, max_ending_here = 0; 

	for (int i = 0; i < n; i++) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		if (max_so_far < max_ending_here) 
		 	max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	} 
	cout<< max_so_far; 
} 


int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<long long int> arr(n);
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     } 
    maxSubArraySum(arr,n);
	return 0; 
} 
