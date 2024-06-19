// matryoshkas

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

void sol(){
    ll n;
    cin >> n;
    ll a[n];
    iArray(a,n);
    unordered_map<ll,ll> m;
    sort(a,a+n);
    for(ll i = 0; i < n; i++) {
        m[a[i]]++;
    }
    ll count=0;
    ll left = n, ptr=0;
    bool done=0;
    while(left>=0){
        if(m[a[ptr]]>0){
            done=0;
        if(m[a[ptr]+1]>0){
            left--;
             m[a[ptr]]--;
            ptr++;
           
        }
        else{
            left--;
            m[a[ptr]]--;
            ptr++;     
            count++;
            done=1;
        }
        if(ptr==n){
            left--;
            m[a[ptr]]--;
            ptr=0;     
            if(!done) count++;

        }
        }
        else ptr++;

    }
    o1(count); 

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        sol();
    }
}
