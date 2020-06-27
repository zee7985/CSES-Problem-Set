#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;

    long  long int totalsum=n*(n+1)/2;

    if(totalsum%2==0)
    {
        cout<<"YES\n";
        vector<long long> arr1,arr2;
        totalsum/=2;
        while(n)
        {
            if(totalsum -n>=0)
            {
                arr1.push_back(n);
                totalsum-=n;
                n--;
            }
            else{
                arr2.push_back(n);
                n--;
            }
        }
        cout<<arr1.size()<<"\n";
        for(int a: arr1)
        {
            cout<<a<<" ";
        }
        cout<<"\n";
        cout<<arr2.size()<<"\n";
        for(int a: arr2)
        {
            cout<<a<<" ";
        }

    }
    else{
        cout<<"NO";
    }
}
