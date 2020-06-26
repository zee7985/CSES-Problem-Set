#include <bits/stdc++.h>
using namespace std;

set<string> answer;
void Permutation(string ques,string ans)
{
    if(ques.length() == 0)
    {
        answer.insert(ans);
        return ;
    }

   
    for(int start = 0;start < ques.length();start++)
    {
        char ch = ques[start];
        string roq = ques.substr(0,start) + ques.substr(start + 1);

        Permutation(roq,ans + ch);
    }
}

int main() {
     string s;
     cin>>s;
     Permutation(s,"");
     cout<<answer.size()<<"\n";
     for(string a: answer)
     {
         cout<<a<<"\n";
     }
    return 0;
}
