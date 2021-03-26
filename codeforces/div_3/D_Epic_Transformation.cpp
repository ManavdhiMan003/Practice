#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,k,n) for(ll i=k;i<n;i++)
#define pb push_back
#define debug cout<<(__LINE__)
typedef long long int ll;
// long long binpowmod(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
// }
void solve(){
    ll n,t,mx=0;
    map<ll,ll> mp;
    cin>>n;
    loop(i,n){
        cin>>t;
        mp[t]++;
        mx = max(mx,mp[t]);
    }
    if(n%2){
        if(mx<=(n/2)){
            cout<<1<<endl;
        }
        else cout<<(mx-(n-mx))<<endl;
    }
    else{
        if(mx<=(n/2)) cout<<0<<endl;
        else cout<<(mx-(n-mx))<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}