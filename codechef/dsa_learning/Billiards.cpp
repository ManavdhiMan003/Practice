#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=1;i<=n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
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
// void solve(){

// }
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll mod=1000000009;
    ll t;
    cin>>t;
    ll dp[1000001];
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(ll i=4;i<1000001;i++){
        dp[i]=((dp[i-2])%mod+(dp[i-3])%mod)%mod;
    }
    ll n;
    // ll ans[t+1];
    // ll t2=t;
    while(t--){
        cin>>n;
        cout<<dp[n]<<endl;
        // ans[t]=dp[n];
    }
    // loop(i,t2) cout<<ans[i]<<endl;
    return 0;
}