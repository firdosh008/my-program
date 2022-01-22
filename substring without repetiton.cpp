#include<bits/stdc++.h>
using namespace std;


int main()
{
    string st;
    cin>>st;
    vector<int>d(256,-1);
    int m=0,start=-1;
for(int i=0;i<st.length();i++)
{
  if(d[st[i]]>start)
  start=d[st[i]];
  d[st[i]]=i;
  m=max(m,i-start);
}
cout<<m;
    return 0;
}