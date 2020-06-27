#include <bits/stdc++.h> 
using namespace std; 

void palindromeReorder(string str) { 
    map<char, int> mp; 
    for (int i = 0; i < str.length(); i++) 
    {
	    mp[str[i]]++; 
    }


    int oddCount = 0; 
    char oddChar; 
    for (auto x : mp) { 
	    if (x.second % 2 != 0) { 
	        oddCount++; 
	        oddChar = x.first; 
	    } 
    } 


    if (oddCount > 1 || oddCount == 1 && str.length() % 2 == 0)
    { 
	    cout<<"NO SOLUTION";
        return;
    } 


    string start = "", end = ""; 
    for (auto x : mp) {  
	    string s(x.second / 2, x.first);  
	    start = start + s; 
	    end = s + end; 
    } 


    if(oddCount == 1)    // add only if count of element is 1
    {
        cout<<(start + oddChar + end) ;
    }
    else{
        cout<<(start + end);
    }
		
		
} 

int main() { 
    string s ;
    cin>>s;
    palindromeReorder(s); 
    return 0; 
} 
