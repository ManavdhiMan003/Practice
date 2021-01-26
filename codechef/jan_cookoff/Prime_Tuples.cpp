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
int ans[1000001]={0};
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n;
    cin>>t;
    vector<ll> v;
    // map<ll,bool> mp;
    ll mx=1000001;
    bool a[mx];
    memset(a,true, sizeof(a));   
    for(ll i=2;i*i<=mx;i++){
        if(a[i]){
            // cout<<a[i]<<" ";
            // v.push_back(i);
            // mp[i]=true;
            for(ll j=i*i;j<=mx;j+=i){
                a[j]=false;
            }
        }
    }
    for(ll i=2;i<mx;i++) if(a[i]) v.push_back(i);
    for(ll i=1;i<v.size();i++){
        if(v[i]+2<mx){
            if(a[v[i]+2]){
                ans[v[i]+2]+=1;
            }   
        }
    }
    for(ll i=1;i<mx;i++){
        ans[i]+=ans[i-1];
        // cout<<ans[i]<<" ";
    }
    // cout<<v.size();
    while(t--){
        cin>>n;
        // ll id=0,count=0;
        // mp.clear();
        
        cout<<ans[n]<<endl;
    }
    return 0;
}