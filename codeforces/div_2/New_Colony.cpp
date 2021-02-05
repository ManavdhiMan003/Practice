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
    int t,n;
    ll k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=1;
        bool b=true;
        while(ans>0 && k>0){
            b=true;
            for(int i=0;i<n-1;i++){
                if(v[i]<v[i+1]){
                    v[i]=v[i]+1;
                    ans=i+1;
                    k--;
                    b=false;
                    break;
                }
            }
            if(b){
                ans=-1;
            }
        }
        cout<<ans<<endl;
    }   
    return 0;
}