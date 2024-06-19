//min max sort

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

bool is_sorted(vector<ll>& arr, ll start, ll end) {
    for(ll i = 0; i < arr.size(); i++) {
        if(arr[i+1] < start+1 || arr[i+1]>end+1  ) {continue;}
        if(arr[i]>arr[i+1]) return 0;
    }
    return 1;
}


void sol(){
    ll n;
    cin >> n;
    vll v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll ptr1=0, ptr2=n-1,count=0;;
    while(ptr1<ptr2){
        if(is_sorted(v,ptr1,ptr2)){
            o1(count);
            return;
        }
        else{count++;ptr1++;ptr2--;}
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
