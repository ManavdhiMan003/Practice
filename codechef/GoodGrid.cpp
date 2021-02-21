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
    ll t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        bool b=false;
        for(ll i=1;i<=n;i++){
            if(x%i==0){
                if(x/i<=n){
                    b=true;
                    break;
                }
            }
        }
        if(b) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
