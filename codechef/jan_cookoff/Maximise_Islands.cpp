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
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<string>v;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            v.pb(s);
        }
        int count=0;
        if(n%2&&m%2){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((i+j)%2==0){
                        if(v[i][j]=='.') count++;
                    }
                    else{
                        if(v[i][j]=='*') count++;
                    }
                }
            }
            cout<<count<<endl;
            continue;
        }
        else{
            int count2=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((i+j)%2==0){
                        if(v[i][j]=='.') count++;
                        else count2++;
                    }
                    else{
                        if(v[i][j]=='*') count++;
                        else count2++;
                    }
                }
            }
            cout<<min(count2,count)<<endl;
        }
    }
    return 0;
}