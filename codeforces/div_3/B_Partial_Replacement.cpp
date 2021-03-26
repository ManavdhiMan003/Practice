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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll l,ans=1,st=n-1,e=0;
    bool b=true;
    for(ll i=0;i<=n;i++){
        if(s[i]=='*'){
            st = min(st,i);
            e = max(e,i);
        }
    }
    // cout<<"hh "<<st<<" "<<e<<endl;
    while(k<e-st){
        for(ll i=st+k;i>st;i--){
            if(s[i]=='*'){
                st=i;
                break;
            }
        }
        ans++;
    }
    cout<<(ans+(e!=st))<<endl;
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