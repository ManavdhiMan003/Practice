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
void solve(){
    int n;
    cin>>n;
    int a[n+1][n+1];
    int k=0;
    if(n%2){
        for(int i=1;i<=n;i++){
            k=0;
            for(int j=i+1;j<=n;j++){
                if(k%2){
                    a[i][j]=1;
                    a[j][i]=-1;
                }
                else{
                    a[i][j]=-1;
                    a[j][i]=1;
                }
                k++;
            }
        }
    }
    else{
        for(int i=1;i<=n;i+=2){
            a[i+1][i]=0;
            a[i][i+1]=0;
            k=0;
            for(int j=i+2;j<=n;j++){
                if(k%2){
                    a[i][j]=1;
                    a[i+1][j]=-1;
                }
                else{
                    a[i][j]=-1;
                    a[i+1][j]=1;
                }
                k++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++) cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}