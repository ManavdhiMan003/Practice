#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
const int mod=998244353;
typedef long long int ll;
long long binpowmod(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int m;
    ll n,k;
    cin>>m>>n>>k;
    if(m==1) cout<<(n-(n-1)/k)%mod<<endl;
    else cout<<(2*n+(n-1)/binpowmod(k,3,mod)-(n*3-2)/k-1)%mod<<endl;
    return 0;
}
