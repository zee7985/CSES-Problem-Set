#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;

    long long zero=0;
    while(n)
    {
        zero+=n/5;
        n/=5;
    }
    cout<<zero;
}
