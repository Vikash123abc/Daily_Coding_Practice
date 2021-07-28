#include<bits/stdc++.h>
using namespace std;

int solve(string s)
{
      /*  unordered_map<char,int>mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});*/
        int mp[24]={};
        mp['I'-'A']=1;
        mp['V'-'A']=5;
        mp['X'-'A']=10;
        mp['L'-'A']=50;
        mp['C'-'A']=100;
        mp['D'-'A']=500;
        mp['M'-'A']=1000;
        int ans=0,n=s.size();
        for(int i=0;i<n-1;i++)
        {
            if(mp[s[i]-'A']<mp[s[i+1]-'A'])
            {
                ans-=mp[s[i]-'A'];
            }
            else
            {
                ans+=mp[s[i]-'A'];
            }
        }
        ans+=mp[s[n-1]-'A'];
    
    return ans;
}
int main()
{
    string s="XCVIII";
  //  cin>>s;
    cout<<solve(s)<<endl;
    return 0;
}