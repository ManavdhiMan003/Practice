#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(int i=0;i<n;i++)
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
    int t,d,n;
    bool b=true;
    cin>>t;
    while(t--){
        cin>>n>>d;
        b=true;
        int a[n];
        loop(i,n){
            cin>>a[i];
            if(a[i]>d) b=false;
        }
        if(b) cout<<"YES\n";
        else{
            sort(a,a+n);
            int temp=a[0]+a[1];
            if(temp<=d) cout<<"YES\n";
            else cout<<"NO\n";
        }

    }
    return 0;
}