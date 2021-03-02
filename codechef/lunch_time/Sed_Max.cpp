#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
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
ll pairs(vector<ll>& arr){
    stack<ll> st;
    set<ll> s;
    st.push(arr[0]);
    // cout<<arr.size()<<"jeje"<<endl;
    for (ll i = 1; i < arr.size(); i++) {
        while (!st.empty() &&   arr[i] > st.top()) {
            s.insert(arr[i]-st.top());
            // cout<<arr[i]<<" d "<<st.top()<<endl;
            st.pop();
            // cout<<st.size()<<endl;
        }
        if (!st.empty()) {
            // cout<<i<<endl;
            s.insert(max(st.top(),arr[i])-min(st.top(),arr[i]));
            // cout<<max(st.top(),arr[i])<<" f "<<min(st.top(),arr[i])<<endl;
        }
        st.push(arr[i]);
    }
    return s.size();
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> v(n);
        loop(i,n) cin>>v[i];
        cout<<pairs(v)<<endl;
    }
    return 0;
}