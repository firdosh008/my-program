#include<bits/stdc++.h>
using namespace std;
int main() {
	long t;
	cin >> t;	
	for(int i=0;i<t;i++)
	{
     long long n,m;
	 cin>>n>>m;
	 long long a[(n*m)];
	long long p=0;
     for(long long j=1;j<=n;j++)
	 {
		 for(long long k=1;k<=m;k++)
		 {
          a[p]=k+j;
          p++;
		 }
         }
         long long b[n*m]={0};
		 long long c[n*m]={0};
		 
		for(long long j=2;j<(n*m)-2;j++)
		{long d=0;
			for(long long k=2;k<j;k++)
			{
			if(j%k==0)
			d++;
			}
			if(d==0)
			b[j]=j;
			
		}
         for(long long j=0;j<n*m;j++)
	    {
		 for(long long k=2;k<=a[j];k++)
         {
             if(b[k]!=0)
             {
             if(a[j]%b[k]==0)
		    c[j]++;
             }
           
         }
         
	      }
          long long sum=0;
	 for(long  long j=0;j<n*m;j++)
      sum+=c[j];
      cout<<sum;
     }							
return 0;
} 