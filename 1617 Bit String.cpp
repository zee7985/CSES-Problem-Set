#include <bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2)%1000000007 * power(x, y / 2)%1000000007; 
    else
        return x%1000000007 * power(x, y / 2)%1000000007 * power(x, y / 2)%1000000007; 
} 

int main() {
    long long int n;
    cin>>n;
    cout<<power(2,n);
}
