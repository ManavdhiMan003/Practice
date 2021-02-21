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
        ll  t,n,temp;
        cin>>t;
        while(t--){
            cin>>n;
            // count=0;
            // vector<ll> v(n);
            ll o=0;
            for(ll i=0;i<n;i++){
                cin>>temp;
                o+=temp;
            }
            // cout<<min(o,e)<<endl;
            if(o%2) cout<<"2\n";
            else cout<<"1\n";
        }
        return 0;
    }