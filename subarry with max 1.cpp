#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int k;
cin>>k;
vector<int>a(n);
for(auto &i:a)
cin>>i;
int zero=0,i=0,ans=0;
for(int j=0;j<n;j++)
{
    if(a[j]==0)
    zero++;
    while(zero>k)
    {
         if(a[i]==0)
        zero--;
        i++;
    }
    ans=max(ans,j-i+1);
}
cout<<ans;
    return 0 ;
}