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
    ll t,n,m,temp,ans,count;
    cin>>t;
    while(t--){
        ans=count=0;
        cin>>n;
        if(n==1){
            cin>>m;
            set<ll,greater<ll>> s;
            loop(i,m){
                cin>>temp;
                s.insert(temp);
            }
            for(int x:s){
                if(x>0) count++;
                else ans+=count; 
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}