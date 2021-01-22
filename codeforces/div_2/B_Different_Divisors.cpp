#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
bool isprime(ll n){
    if(n<=3) return true;
    if(n%2==0||n%3==0) return false;
    for(ll i=5;i*i<=n;i=i+6){
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    ll count,n;
    ll d;
    cin>>t;
    while(t--){
        cin>>d;
        vector<ll> v;
        count=1;
        n=count;
        while(count<3){
            n=n+d;
            while(!isprime(n)){
                // cout<<"yes ";
                n++;
            }
            count++;
            v.pb(n);
        }
        cout<<v[0]*v[1]<<endl;
    }

}