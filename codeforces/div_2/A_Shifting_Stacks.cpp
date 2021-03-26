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
    int t;
    ll n,h;
    cin>>t;
    while(t--){
        cin>>n;
        ll count=0,check=n*(n-1)/2;
        bool b=true;
        ll extra=0;
        loop(i,n){
            cin>>h;
            if(b){
                count+=h;
                if(count>=check) b=false;
            }
            // if(n==2){
            //     extra+=h;
            // }   
        }
        // if(extra>=1 && n==2) cout<<"YES\n";
        if(!b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}