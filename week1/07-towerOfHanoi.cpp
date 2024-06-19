#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void move(ll n, ll a, ll b, ll c, ll &count, vector<pair<int,int>> &v) {
    if (n == 1) {
        v.push_back({a,b});
        //cout << a << ' ' << b << "\n";
        count++;
    } else {
        move(n - 1, a, c, b, count, v);
        v.push_back({a,b});
        //cout << a << ' ' << b << "\n";
        count++;
        move(n - 1, c, b, a, count, v);
    }
}
 
int main() {
    ll count = 0;
    ll n; // You can set n to any number of disks
    cin >> n;
    vector<pair<int,int>> v;
    move(n, 1, 3, 2, count, v);
    cout << count << endl;
    for(int i=0; i<v.size(); i++) cout << v[i].first << ' ' << v[i].second << "\n";
    return 0;
}