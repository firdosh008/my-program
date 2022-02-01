#include<iostream>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[n][m];
int b[m];
int c[n];
for(int i=0;i<n;i++)
{c[i]=0;
	for(int j=0;j<m;j++)
	{
		b[j]=0;
		cin>>a[i][j];
	}}
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
	b[i]=max(b[i],a[j][i]);
}
int ma=0;int ans=0;
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
	  if(b[i]==a[j][i])
	  {
	  c[j]++;
      if(ma<c[j])
		{
			ma=c[j];
			ans=j;
		}
	  }
  }
}
int maa=0;
for(int j=0;j<n;j++)
{
	if(c[j]==ma)
	{
		int s=0;
		for(int i=0;i<m;i++)
		s=s+a[j][i];
		if(maa<(s/m))
		{
			maa=s/m;
			ans=j;
		}
	}
}

cout<<ans+1;


	return 0;
}