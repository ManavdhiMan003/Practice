#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,se,so;
    cin>>t;
    while(t--){
        se=so=0;
        cin>>n;
        ll a[n];
        loop(i,n) cin>>a[i];
        sort(a,a+n,greater<ll>());
        loop(i,n){
            if(a[i]%2==0&&i%2==0){
                se+=a[i];
            }
            else if(a[i]%2&&i%2) so+=a[i];
        }
        if(se==so) cout<<"Tie\n";
        else if(se>so) cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    return 0;
}