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
    ll t;
    cin>>t;
    string s;
    int a[256];
    while(t--){
        ll e=0,o=0,od=0;
        cin>>s;
        for(int i=0;i<256;i++) a[i]=0;
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
        }
        for(int i=0;i<256;i++){
            // cout<<a[i]<<" "; 
            if(a[i]==1) o++;
            else if(a[i]%2==0 && a[i]!=0){
                if(a[i]==2) e++;
                else e=e+a[i]/2;
            }
            else if(a[i]>3) od = od + (a[i]-3)/2;
        }
        // cout<<e<<" "<<o<<" "<<od<<endl;
        if(od+e>=o) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}