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
    int t;
    ll x,y;
    string s;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>s;
        char chx,chy;
        if(x<0){
            chx='L';
        }
        else chx='R';
        if(y<0){
            chy='D';
        }
        else chy='U';
        ll cntx=0,cnty=0;   
        for(ll i=0;i<s.length();i++){
            if(s[i]==chx) cntx++;
            else if(s[i]==chy) cnty++;
        }
        if(cntx>=abs(x)&&cnty>=abs(y)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}