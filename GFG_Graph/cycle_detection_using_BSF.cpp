#include <bits/stdc++.h>
using namespace std;

bool CheckFroCycle(int s, int V, vector<int> adj[], vector<int> &visited) {
    queue<pair<int, int>> q;

    visited[s] = true;
    q.push({s, -1});

    while (!q.empty()) {
        int node = q.front().first;
        int pre = q.front().second;
        q.pop();

        for (auto it : adj[node]) {
            if (!visited[it]) {
                visited[it] = true;
                q.push({it, node});
            }
            else if (it != pre) {   // FIXED CONDITION
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]) {
    vector<int> vis(V + 1, 0);

    for (int i = 1; i <= V; i++) {
        if (!vis[i]) {
            if (CheckFroCycle(i, V, adj, vis))
                return true;
        }
    }
    return false;
}

int main() {
    int V, e, u, v;
    cin >> V >> e;

    vector<int> adj[V + 1];

    for (int i = 1; i <= e; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << isCycle(V, adj);

    return 0;
}