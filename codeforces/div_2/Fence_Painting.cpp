#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
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
    while(t--){
        cin>>n>>m;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        bool ps=true;
        vector<ll> b(n);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin>>b[i];
            if(ps) if(b[i]!=a[i]) ps=false;
            if(b[i]!=a[i]) mp[i]=b[i];
        }
        if(ps){
            vector<ll> c(m);
            bool pst=true;
            ll id;
            for(ll i=0;i<m;i++){
                cin>>c[i];
                if(pst){
                    auto it=find(a.begin(),a.end(),c[i]);
                    if(it!=a.end()){
                        id=i;
                        pst=false;
                    }
                }
            }
            if(pst) cout<<"NO\n";
            else{
                cout<<"YES\n";
                for(ll i=0;i<m;i++) cout<<id+1<<" ";
                cout<<endl;
            }
        }
        else{
            cout<<"process\n";
        }
    }
    return 0;
}