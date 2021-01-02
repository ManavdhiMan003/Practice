#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,n,k,temp,h1,h2,ans;
    cin>>t;
    vector<ll> v;
    while(t--){
        h1=h2=ans=0;
        cin>>n>>k;
        v.clear();
        loop(i,n){
            cin>>temp;
            v.pb(temp);
        }
        sort(v.begin(),v.end(),greater<ll>());
        bool b=true;
        for(int i=0;i<v.size();i++){
            if(h1>=k && h2>=k){
                cout<<ans<<endl;
                b=false;
                break;
            }
            if(h1>h2) h2+=v[i];
            else h1+=v[i];
            // cout<<h1<<" "<<h2<<" yep\n";
            ans++; 
        } 
        if(b){
            if(h1>=k&& h2>=k){
                cout<<ans<<endl;
            }
            else cout<<"-1\n";
        }
    }
    return 0;
}