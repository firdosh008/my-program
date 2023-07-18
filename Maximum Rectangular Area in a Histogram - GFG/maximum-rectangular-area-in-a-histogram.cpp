//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<long long> st1,st2;
        
        vector<long long>left(n),right(n);
        
        for(int i=0;i<n;i++){
            while(!st1.empty()  && arr[st1.top()] >= arr[i]) st1.pop();
            
            if(st1.empty()) left[i]=-1;
            else left[i]=st1.top();
            
            st1.push(i);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!st2.empty()  && arr[st2.top()] >= arr[i]) st2.pop();
            
            if(st2.empty()) right[i]=n;
            else right[i]=st2.top();
            
            st2.push(i);
        }
        
        long long ans=0;
        
        for(int i=0;i<n;i++)
            ans=max(ans,arr[i]*(right[i]-left[i]-1));
        
        
        return ans;
        
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends