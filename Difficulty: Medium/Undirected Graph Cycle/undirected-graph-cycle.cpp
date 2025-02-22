//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool helper(vector<vector<int>> &adj,int u,vector<bool>&visited,int p){
        visited[u]=true;
        for(int i:adj[u]){
            if(!visited[i]){
                if(helper(adj,i,visited,u))
                return true;
            }
            else if(i!=p){
                return true;
            }
        }
        return false;
    }
    bool isCycle(vector<vector<int>> &adj) {
        // code here
        int v=adj.size();
        vector<bool>visited(v,false);
        for(int u=0;u<v;u++){
            if(!visited[u]){
                if(helper(adj,u,visited,-1))
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends