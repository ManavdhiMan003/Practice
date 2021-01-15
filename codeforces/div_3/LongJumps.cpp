#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=1;i<=n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,ans,temp,score;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+1],id=0;
        temp=ans=score=0;
        loop(i,n) cin>>a[i];
        ll ret[n+1];
        ret[n]=a[n];
        for(int i=n;i>=1;i--){
            int tempa=a[i];
            if(a[i]+i<=n)   tempa+=ret[a[i]+i];
            ret[i]=tempa;
        }
        // for(int i=1;i<=n;i++){
        //     temp=score=0;
        //     for(int j=i;j<=n;){
        //         // cout<<j<<" yes";
        //         if(j==i)  temp=a[j]+j;
        //         else temp+=a[j];
        //         // cout<<temp<<" "<<endl;
        //         score+=a[j];
        //         j=temp;
        //     }
        //     // cout<<endl;
        //     if(ans<score){
        //         ans=score;
        //         // id=i;
        //     }
        // }
        for(int i=1;i<=n;i++){
            // cout<<ret[i]<<" ";
            ans=max(ans,ret[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}