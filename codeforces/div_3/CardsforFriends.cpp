#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
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
    ll t,w,h,n,count=0;
    cin>>t;
    while(t--){
        cin>>w>>h>>n;
        count=1;
        if(n==1) cout<<"YES\n";
        else if(w%2&&h%2) cout<<"NO\n";
        else{
            w=w*h;
            count=0;
            while(w%2==0){
                w/=2;
                count++;
            }
            // cout<<h<<endl;
            count = binpowmod(2,count,INT_MAX);
            // cout<<count<<endl;
            if(count>=n) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}