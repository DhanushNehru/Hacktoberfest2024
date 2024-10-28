#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS traversal of a graph from a given starting node
vector<int> bfsTraversal(int vertices, vector<vector<int>>& adj, int start) {
    vector<int> traversal;         // To store the BFS traversal result
    vector<bool> visited(vertices, false); // To keep track of visited nodes
    queue<int> q;                  // Queue for BFS

    // Start from the given starting node
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        traversal.push_back(node);

        // Visit all adjacent nodes of the current node
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return traversal;
}

int main() {
    int vertices, edges;

    // Input the number of vertices and edges
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    // Initialize adjacency list for the directed graph
    vector<vector<int>> adj(vertices);

    cout << "Enter the edges (u v) where there is a directed edge from u to v:" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // Directed edge from u to v
    }

    // Perform BFS traversal from node 0
    vector<int> traversal = bfsTraversal(vertices, adj, 0);

    // Output the BFS traversal
    cout << "BFS traversal starting from node 0: ";
    for (int node : traversal) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}





// Time Complexity: 
// O(V+E), where
// V is the number of vertices and 
// E is the number of edges. Each node and edge is processed once in the BFS.
// Space Complexity: 
// O(V), as it uses an additional visited array and a queue, both of which grow proportionally to the number of vertices.



