#include<bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

#define pb push_back
#define pob pop_back
#define ff first
#define ss second 
#define sz size
#define reach cout<<"Reached"<<endl; 
#define o1(a) cout<<a<<"\n"
#define o2(a,b) cout << a << ' ' << b << "\n"; 
#define iArray(a,n) for(ll i=0; i<n; i++) cin >> a[i]; 
#define i2(a,b) cin >> a >> b;

void sol() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    iArray(a, n);
    
    sort(a.begin(), a.end());
    
    vector<bool> used(n, false);
    ll count = 0, last = -1;
    ll left = n, ptr = n - 1;
    
    while(left > 0) {
        while(ptr >= 0 && (a[ptr] == last || used[ptr])) ptr--;
        
        if(ptr >= 0) {
            last = a[ptr];
            used[ptr] = true;
            left--;
        } else {
            ptr = n - 1;
            while(ptr >= 0 && used[ptr]) ptr--;
            
            if(ptr >= 0) {
                last = a[ptr];
                used[ptr] = true;
                left--;
            }
            
            count++;
        }
    }

    o1(count);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        sol();
    }
}
