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

void sol(){
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll count=0, tempCount=1;
    for(ll i = 1; i < n; i++) {
        if(2*a[i]>a[i-1]){
            tempCount++;
        }
        else{
            tempCount = 1;
        }
        if(tempCount>=k+1){
            count++;
        }
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
