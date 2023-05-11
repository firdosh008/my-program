//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
   long long help(int n,vector<long long>&v1){
        
        if(n==2){
            v1[n]=n;
            return n;
        }
         
         
         if(v1[n]!=-1) return v1[n];
         
         return v1[n]=help(n-1,v1)+help(n-2,v1);
         
    }
    vector<long long> printFibb(int n) 
    {
        vector<long long>v1(n,-1);
        v1[0]=1;
        v1[1]=1;
       long long x= help(n-1,v1);
    
        return v1;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends