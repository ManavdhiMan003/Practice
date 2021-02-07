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
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,m;
    cin>>t;
    vector<ll> g[100000];
    while(t--){
        cin>>n>>m;
        for(ll i=1;i<=n;i++){
            g[i].clear();
        }
        vector<ll> a(n+1);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll temp;
        vector<ll> b(n+1);
        for(ll i=1;i<=n;i++){
            cin>>b[i];
            if(b[i]!=a[i]){
                g[b[i]].pb(i);
            }
        }
        vector<ll> c(m+1);
        for(ll i=1;i<=m;i++) cin>>c[i];
        ll last=-1;
        if(g[c[m]].size()>0){
            last=g[c[m]].back();
            // cout<<last<<" hhd "<<endl;
            g[c[m]].pop_back();
        }
        else{
            for(ll i=1;i<=n;i++){
                if(b[i]==c[m]){
                    last=i;
                    break;
                }
            }
        }
        if(last==-1){
            cout<<"NO\n";
            continue;
        }
        vector<ll> ans(m+1);
        ans[m]=last; 
        // cout<<a[m]<<" hha ";
        for(ll i=1;i<m;i++){
            if(g[c[i]].size()==0) ans[i]=last;
            else{
                ans[i]=g[c[i]].back();
                g[c[i]].pop_back();
            }
        }
        bool ps=true;
        for(ll i=1;i<=n;i++){
            if(g[i].size()>0){
                cout<<"NO\n";
                ps=false;
                break;
            }
        }
        if(ps){
            cout<<"YES\n";
            for(ll i=1;i<=m;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;     
        }
    }
    return 0;
}