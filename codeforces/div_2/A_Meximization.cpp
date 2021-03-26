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
    ll n;
    cin>>n;
    ll a[n];
    loop(i,n) cin>>a[i];
    sort(a,a+n);
    ll t=n-1;
    ll e=0;
    loop(i,n-1){
        if(a[i]==a[i+1]){
            // cout<<a[i]<<" "<<a[i+1]<<endl;
            if(a[i]!=a[n-1]){
                swap(a[i+1],a[t]);
                // cout<<a[i]<<a[t]<<endl;
                t--;
            }
            else{
                swap(a[i+1],a[e]);
                // cout<<a[i]<<a[e]<<endl;
                e++;
            }
        }
    }
    loop(i,n) cout<<a[i]<<" ";
    cout<<endl;
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