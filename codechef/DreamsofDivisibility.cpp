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
// bool check(ll n,ll k){
//     ll g=__gcd(n,k);
//     // cout<<g;
//     float f;
//     n=n/g;
//     // cout<<k;
//     f=float(log2(n+1));
//     // cout<<f<<endl;
//     f=f*10;
//     ll f2=ll(f);
//     if(f2%10==0){
//         return true;
//     }
//     else return false;
// }
ll shift(ll n){
    while(n%2==0) n=n/2;
    return n;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,k,temp;
    cin>>t;
    while(t--){
        cin>>n>>k;
        bool b=true;
        // ll f=k;
        k=shift(k);
        while(n--){
            cin>>temp;
            if(!b) continue;
            if(temp%k!=0) b=false; 
        }
        if(b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
