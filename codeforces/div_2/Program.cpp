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
    int t;
    ll n,m,x,l,r;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin>>s;
        x=0;
        // set<pair<int,int>,int> ps;
        // for(auto x:mp){
        //     cout<<
        // }
        while(m--){
            cin>>l>>r;
                set<int> st;
                x=0;
                st.insert(0);
                for(int i=0;i<l-1;i++){
                    if(s[i]=='+') x++;
                    else x--;
                    st.insert(x);
                }
                for(int i=r;i<s.length();i++){
                    if(s[i]=='+') x++;
                    else x--;
                    st.insert(x);
                }
                cout<<st.size()<<endl;
        }
    }
    return 0;
}