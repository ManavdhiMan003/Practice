#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,k,n) for(ll i=k;i<n;i++)
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
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n];
        loop(i,n) cin>>a[i];
        bool b=true;
        loop1(i,1,n){
            if(a[i]>a[i-1]){
                cout<<"Yes\n";
                b=false;
                break;
            }
        }
        if(b) cout<<"No\n";
    }
    return 0;
}