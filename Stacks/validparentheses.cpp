#include<bits/stdc++.h>
using namespace std;

  bool solve(string s) {
        int n=s.size();
        stack<char>stc;
        if(n<=1) return false;
        else if(s[0]==')'|| s[0]=='}' || s[0]==']') return false;
        else
        {
            
            stc.push(s[0]);
            for(int i=1;i<n;i++)
            {
               if(!stc.empty() &&((stc.top()=='(' && s[i]==')') || (stc.top()=='{' && s[i]=='}') || (stc.top()=='[' && s[i]==']') ))
                {
                    stc.pop();
                }
                else
                {
                    stc.push(s[i]);
                }
                       
            }
            
        }
        return stc.size()==0;
    }


int main()
{
    string s="(){}{()}";
    cout<<solve(s)<<endl;
    return 0;
}