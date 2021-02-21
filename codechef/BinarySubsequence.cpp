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
    ll t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        // stack<ll>st;
        ll one=0,zero = 0;
        for(ll i = 0;i<n;i++)
        {
            // temp = s[i]-'0';
            if(s[i] == '0') zero++;
            else
            {
                one=1+max(one,zero);
            }
        }
        cout<<n-max(one,zero)<<endl;
    }
    return 0;
}