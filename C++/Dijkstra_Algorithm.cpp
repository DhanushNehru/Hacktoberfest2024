// Dijkstra's Algorithm: Finds the shortest path from a source node to all other nodes in a graph.
// The algorithm uses a priority queue (min-heap) to efficiently find the next closest node.
// It is commonly used for finding the shortest path in weighted graphs, like road networks.

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <climits>

using namespace std;

vector<int> dijkstra(int n, vector<pair<int, int>> adj[], int src) {
    vector<int> dist(n, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto &edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int n = 5;
    vector<pair<int, int>> adj[n];
    adj[0].push_back({1, 10});
    adj[0].push_back({4, 3});
    adj[1].push_back({2, 2});
    adj[1].push_back({4, 4});
    adj[2].push_back({3, 9});
    adj[3].push_back({2, 7});
    adj[4].push_back({1, 1});
    adj[4].push_back({2, 8});
    adj[4].push_back({3, 2});

    int src = 0;
    vector<int> distances = dijkstra(n, adj, src);

    for (int i = 0; i < n; i++) {
        cout << "Distance from node " << src << " to node " << i << " is " << distances[i] << endl;
    }

    return 0;
}
