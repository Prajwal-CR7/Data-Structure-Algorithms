#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bsfofgraph(int V, vector<int> adj[]) {
        vector<int> bsf;
        vector<int> vis(V + 1, 0);

        for (int i = 1; i <= V; i++) {
            if (!vis[i]) {
                queue<int> q;
                q.push(i);
                vis[i] = 1;

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    bsf.push_back(node);

                    for (auto it : adj[node]) {
                        if (!vis[it]) {
                            q.push(it);
                            vis[it] = 1;  // FIXED
                        }
                    }
                }
            }
        }

        return bsf;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++) {   // FIXED
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution s;
    vector<int> res = s.bsfofgraph(n, adj);

    for (auto x : res) {
        cout << x << " ";
    }
    return 0;
}