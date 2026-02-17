#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        vector<int> R(n + 2, 0);

        for (int i = n; i >= 1; i--) {
            R[i] = max(R[i], i);
            R[i] = max(R[i], R[i + 1]);
            for (int v : adj[i]) {
                R[i] = max(R[i], R[v]);
            }
        }

        ll ans = 0;
        for (int y = 1; y <= n; y++) {
            ll k = R[y] - y;
            if (k > 0) {
                ans += k * (k + 1) / 2;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
