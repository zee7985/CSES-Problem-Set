#include <bits/stdc++.h>
#define ll long long int

using namespace std;

//Hll:Sum of consecutive odd no. is perfect square - eg- 1+3=4   , 4+5=9  ,9+7=16  

int main()
{
    int t;
    ll  x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2 == 0)
            {
                ll square_=x*x;                 //get the upper perfect square 
                cout << square_ - y + 1 << endl;
            }
            else
            {
                x= x - 1;                        //else get lower perfect square
                ll square_=x*x;
                cout << square_ + y << endl;
            }
        }
        else
        {
            if (y % 2 == 1)
            {
                ll square_=y*y;                
                cout << square_ - x + 1 << endl;
            }
            else
            {
                y =y - 1;                        
                ll square_=y*y;
                cout << square_ + x << endl;
            }
        }
    }
    return 0;
}