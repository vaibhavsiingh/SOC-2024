#include<bits/stdc++.h>
using namespace std;typedef int64_t ll;typedef vector<ll> vll;typedef pair<ll,ll> pll;
#define pb push_back
#define pob pop_back
#define ff first				
#define ss second 
#define sz size	
#define reach cout<<"Reached"<<endl; 
#define o1(a) cout << fixed << setprecision(0) << a << "\n"
#define o2(a,b) cout << fixed << setprecision(0) << a << ' ' << b << "\n"; 

void sol(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >>d;
        if(d < b){
            o1(-1);
        }
        else if(c>a && d-b < c-a) o1(-1);
        else{
            o1(d-b+a+d-b-c);
        }
        
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sol();
}
