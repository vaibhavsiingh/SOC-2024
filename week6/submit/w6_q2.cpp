#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define sz size
#define reach cout << "Reached" << endl;
#define o1(a) cout << a << "\n"
#define o2(a, b) cout << a << ' ' << b << "\n";

#define iArray(a, n) for (ll i = 0; i < n; i++) cin >> a[i];
#define i2(a, b) cin >> a >> b;

const ll MOD = 1000000007;

bool dfs(vector<vll>& adj, vll& visited, ll start, ll parent, vll& route, vll& cycle_start) {
    visited[start] = 1;
    route.pb(start);

    for (auto c : adj[start]) {
        if (c == parent) continue; 

        if (visited[c] == 1) {
            cycle_start.pb(c);
            return true;
        }
        if (visited[c] == 0) {
            if (dfs(adj, visited, c, start, route, cycle_start)) {
                return true;
            }
        }
    }

    route.pob();
    visited[start] = 2;
    return false;
}

void sol() {
    ll n, m;
    i2(n, m);
    vector<vll> adj(n + 1);
    vll visited(n + 1, 0);

    for (ll i = 0; i < m; i++) {
        ll a, b;
        i2(a, b);
        adj[a].pb(b);
        adj[b].pb(a);
    }

    vll route, cycle_start;

    for (ll i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            if (dfs(adj, visited, i, -1, route, cycle_start)) {
                break;
            }
        }
    }

    if (cycle_start.empty()) {
        o1("IMPOSSIBLE");
    } else {
        vll cycle;
        for (auto it = route.rbegin(); it != route.rend(); ++it) {
            cycle.pb(*it);
            if (*it == cycle_start[0]) break;
        }
        reverse(cycle.begin(), cycle.end());
        o1(cycle.size()+1);
        for (auto node : cycle) {
            cout << node << ' ';
        }
        cout << cycle[0] << ' ';
        cout << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
