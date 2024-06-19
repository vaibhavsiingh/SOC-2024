// sliding window median

#include<bits/stdc++.h>
using namespace std;typedef int64_t ll;typedef vector<ll> vll;typedef pair<ll,ll> pll;
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

void sol(){
    ll n,k;
    i2(n,k);
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    multiset<ll> s;
    for(ll i = 0; i < k; i++) {
        s.insert(a[i]);
    }
    
    auto median = s.begin();
    for(ll i = 0; i < (k-1)/2; i++) {
        median++;
    }
    
    cout << *median << ' ';
    
    for(ll i = k; i < n; i++) {
        s.insert(a[i]);
        //o1(*s.find(a[i-k]));
        s.erase(s.find(a[i-k]));
        //if(a[i-k]<*median && a[i]>*median) median++;
      //  if(a[i-k]>*median && a[i]<*median) median--;
        // for(auto it = s.begin(); it != s.end() ; it++) {
        //     cout << * it << ' ';
        // }
        // cout << "\n";
        auto median = s.begin();
        for(ll i = 0; i < (k-1)/2; i++) {
            median++;
        }
    
        cout << *median << ' ';
    }



}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
