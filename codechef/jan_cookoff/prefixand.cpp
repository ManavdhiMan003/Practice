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
int ans[1000001]={0};
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    ll n,temp;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> e,o,z;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==0) z.pb(temp);
            else if(temp%2==0) e.pb(temp);
            else o.pb(temp);
        }
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        int ne=e.size(),no=o.size(); 
        if(ne>=no){
            if(ne==no){
                
            }
        }
    }
    return 0;
}