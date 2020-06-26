#include <iostream>
using namespace std;

//No of ways to place 1 knights =n*n,and that of second =n*n-1,As both are identical so divide by 2
//total ways=(n*n)(n*n-1) - no of ways in which they can attack each other
// this can be found out by finding total no of 2X3 and 3X2 chessboard for n=3 ,there is 2 3X2 chessboard and 2- 2X3 chessboard
//which is equal to (3-1)(3-2)  -present at column 1 and column 2
//in general we can find total 2X3 chessboard by shifting it sideways and downways -4*(n-1)(n-2)
int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<(i*i)*(i*i -1)/2 - 4*(i-1)*(i-2)<<"\n";  
    }
}
