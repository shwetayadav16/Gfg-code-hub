//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(vector<vector<int>> &adj, vector<bool> &visited, vector<int> &ans, int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for (auto neighbor : adj[frontNode]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

vector<int> bfsOfGraph(vector<vector<int>> &adj) {
    int n = adj.size();
    vector<bool> visited(n, false);
    vector<int> ans;

    // Start BFS traversal from node 0 (as per problem constraints)
    bfs(adj, visited, ans, 0);

    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends