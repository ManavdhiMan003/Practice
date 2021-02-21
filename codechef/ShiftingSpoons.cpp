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
struct value{
    ll p,q,x;
};
struct myComp { 
    constexpr bool operator()( 
        pair<int, int> const& a, 
        pair<int, int> const& b)    
        const noexcept 
    { 
        return a.second > b.second; 
    } 
}; 

typedef pair<ll, ll> pi;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,temp,q;
    cin>>t;
    while(t--){
        cin>>n;
        // cout<<n<<"ujj ";
        ll count=0;
        priority_queue<pi,vector<pi>,myComp> pq; 
        // map<ll,ll> mp;
        cin>>count;
        // cout<<count<<"hel "<<endl;
        for(ll i=2;i<=n;i++){
            cin>>temp;
            // cout<<i<<" y "<<temp<<endl;
                // cout<<pq.top().first<<" "<<pq.top().second<<endl;
            pq.push(make_pair(i,temp));
                // cout<<i<<" "<<temp<<endl;
            // cout<<pq.top().first<<" "<<pq.top().second<<endl;
        }
        // pair<ll,ll> p=pq.top();
        // for(ll i=0;i<)
        bool b=true;
        vector<value> v;
        // p=pq.top();
        pi pt;
        value nxt;
        ll times=0;
        while(!pq.empty()){
            // p=pq.top();
            times++;
            // cout<<pq.top().first<<" "<<pq.top().second<<endl;
            pt=pq.top();
            pq.pop();
            if(count>=pt.second){
                nxt.x=pt.second;
                nxt.p=pt.first;
                nxt.q=1 ;
                v.pb(nxt);
                count+=pt.second;
            }
            else{
                if(pq.empty()){
                    // b=false;
                    times=2*n;
                    // break;
                }
                else{
                    // pair<ll,ll> pt;
                    // pt=pq.top();
                    // pq.pop();
                    pi p2=pq.top();
                    pq.pop();
                    ll df=pt.second-count;
                    nxt.x=df;
                    nxt.q=p2.first;
                    nxt.p=pt.first;
                    v.pb(nxt);
                    p2.second+=df;
                    pt.second=count;
                    count+=count;
                    pq.push(p2);
                    nxt.x=count;
                    nxt.p=pt.first;
                    nxt.q=1;
                    v.pb(nxt);
                }
            }
        }
        if(times>=2*n) cout<<"-1\n";
        else{
            cout<<v.size()<<endl;
            for(auto i:v){
                cout<<i.p<<" "<<i.q<<" "<<i.x<<endl;
            }
        }
    }
    return 0;
}