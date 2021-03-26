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
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<char> v;
        char c;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>c;
                if(i==2||j==2){
                   if(c!='*') v.pb(c);
                }
           }
        }
        if(m%2){
            cout<<"YES\n";
            for(int i=0;i<=m;i++){
                if(i%2) cout<<"2 ";
                else cout<<"1 ";
            }
            cout<<endl;
        }
        else{
            if(n==2){
                if(v[1]==v[0]){
                    cout<<"YES\n";
                    for(int i=0;i<=m;i++){
                        if(i%2) cout<<"2 ";
                        else cout<<"1 ";
                    }
                    cout<<endl;
                }
                else cout<<"NO\n";
            }
            else{
                if(v[0]==v[1]){
                    cout<<"YES\n";
                    for(int i=0;i<=m;i++){
                        if(i%2) cout<<"2 ";
                        else cout<<"1 ";
                    }
                    cout<<endl;
                }
                else if(v[1]==v[2]){
                    cout<<"YES\n";
                    for(int i=0;i<=m;i++){
                        if(i%2) cout<<"3 ";
                        else cout<<"2 ";
                    }
                    cout<<endl;
                }
                else if(v[0]==v[2]){
                    cout<<"YES\n";
                    for(int i=0;i<=m;i++){
                        if(i%2) cout<<"1\n";
                        else cout<<"3\n";
                    }
                    cout<<endl;    
                }
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}