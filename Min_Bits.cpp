#include<iostream>
using namespace std;

int main()
{
long t;
cin>>t;
for(long i=0;i<t;i++)
{
long l,r;
cin>>l>>r;
long m=10000000;long ans=0;
long a[r]={0};

for(int j=1;j<=r;j++)
{
if(j%2==0)
a[j]=a[j/2];
else
a[j]=a[j/2]+1;

}
for(int j=l;j<=r;j++)
{
    if(m>a[j])
    {
        m=a[j];
        ans=j;
    }
}
cout<<ans;
}
return 0;
}

