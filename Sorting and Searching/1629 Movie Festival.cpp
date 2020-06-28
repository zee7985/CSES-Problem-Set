  
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j, curr_end = 0, count = 0;
	vector<pair<int, int>> time;
	cin >> n;
	while (n--)
    {
		cin >> i >> j;
		time.push_back(make_pair(j,i));  //make pair-end:start -because we need to sort according end time
	}
	// sorting by ending times
	sort(time.begin(), time.end());
	for (auto a : time)
	{
        if (a.second >= curr_end)
		{
			curr_end = a.first;
			count++;
		}
	}
	cout << count;
    return 0;
}