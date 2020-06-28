#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int midEle = arr[n / 2];
    long long cost=0;
    for(int i=0;i<n;i++)
    {
        cost+=abs(arr[i]-midEle);
    }
	cout<<cost;
    return 0;
} 