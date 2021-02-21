#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
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
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    loop(i,n){
        cin>>a[i];
    }
    ll dp[n]={0};
    dp[0]=1;
    ll count=1;
    for(ll i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            count++;
            dp[i]=dp[i-1]+count;
        }
        else{
            count=1;
            dp[i]=dp[i-1]+1;
        }
    }
    cout<<dp[n-1]<<endl;
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