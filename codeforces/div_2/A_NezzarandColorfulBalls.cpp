#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(int i=1;i<n;i++)
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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],ans=1,mn=0 ,count=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==0) continue;
            if(a[i]==a[i-1]){
                // cout<<a[i]<<" "<<a[i-1]<<endl;
                count++;
                mn=max(mn,count);
            }
            else{
                // cout<<mn<<" "<<count<<" ";
                // cout<<mn<<" "<<count<<"eyp\n";
                count=1;
            }
        }
        if(mn==0) mn=max(count,mn);
        if(mn) cout<<mn<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}