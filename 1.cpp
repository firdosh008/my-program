#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int t;
cin>>t;
vector<int> a(n);
for(auto &i:a)
cin>>i;
bool f=false;
sort(a.begin(),a.end());
for(int i=0;i<n;i++)
{
  int lo=i+1;
  int hi=n-1;
  while(lo<hi)
  {
    int current =a[i]+a[lo]+a[hi];
    if(current=t)\
    {
    f=true;
    break;
    }
    if(current<t)
    {
      lo++;
    }
    else
    hi--;
  }
}
if(f)
cout<<"true";
else
cout<<"false";



return 0;
}
