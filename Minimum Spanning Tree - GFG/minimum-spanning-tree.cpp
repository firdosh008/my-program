//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:

    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        vector<int>visited(V,0);
    
        pq.push({0,0});
        int ans=0;
        
        while(!pq.empty()){
            auto t=pq.top();
            pq.pop();
            
            int weight=t.first;
            int node=t.second;
            
            if(visited[node]) continue;
            
            visited[node]=1;
            ans+=weight;
            
            for(auto it:adj[node]){
              int newweight=it[1];
              int newnode=it[0];
              
              if(!visited[newnode])
              pq.push({newweight,newnode});
                
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends