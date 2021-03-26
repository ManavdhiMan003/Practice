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
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2==0){
            if(k%n==0) cout<<n<<endl;
            else cout<<k%n<<endl;
        }
        else{
            k--;
            cout << ((k + (n % 2) * k / (n/2)) % n + 1)<< endl;
        }
    }
    return 0;
}