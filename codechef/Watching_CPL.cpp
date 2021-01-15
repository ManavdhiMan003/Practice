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
    ll t,n,k,temp,h1,h2,ans,sum;
    cin>>t;
    vector<ll> v;
    while(t--){
        h1=h2=ans=sum=0;
        cin>>n>>k;
        v.clear();
        loop(i,n){
            cin>>temp;
            v.pb(temp);
            sum+=temp;
        }
        if(n==1) cout<<"-1\n";
        else if(sum<2*k) cout<<"-1\n";
        // else if(sum==2*k) cout<<n<<endl;
        else{
            sort(v.begin(),v.end(),greater<ll>());
            ll i=0;
            bool p1=false,p2=false;
            vector<ll> ve,ve2;
            for(i;i<n;i++){
                h1+=v[i];
                ans++;
                // cout<<v[i]<<" ";
                ve.pb(v[i]);
                ve2.pb(v[i]);
                if(h1>=k){
                    p1=true;
                    break;
                }
            }
            i++;
            bool b=true;
            // ll id=0;
            // ll i2=i,h11=h1,h22=0,ans2=ans;
            for(i;i<n;i++){
                b=true;
                // cout<<v[i]<<" ";
                for(ll j=0;j<ve.size();j++){   
                    if(v[i]<ve[j]){
                        if(h1-ve[j]+v[i]>=k){
                            // cout<<ve[j]<<" "<<v[i]<<endl;
                            h1=h1-ve[j]+v[i];
                            h2+=ve[j];
                            ve[j]=v[i];
                            ans++;
                            b=false;
                            // id=j+1;
                            sort(ve.begin(),ve.end(),greater<ll>());
                            break;
                        }
                    }
                }
                if(b){
                    h2+=v[i];
                    ans++;
                }
                if(h2>=k){
                    p2=true;
                    break;
                }
            }
            // for(i2;i2<n;i2++){
            //     b=true;
            //     // cout<<v[i]<<" ";
            //     for(ll j=0;j<ve2.size();j++){   
            //         if(v[i]<ve2[j]){
            //             if(h11-ve2[j]+v[i]>=k){
            //                 // cout<<ve[j]<<" "<<v[i]<<endl;
            //                 h11=h11-ve2[j]+v[i];
            //                 h22+=ve2[j];
            //                 ve2[j]=v[i];
            //                 ans2++;
            //                 b=false;
            //                 // id=j+1;
            //                 // sort(ve.begin(),ve.end(),greater<ll>());
            //                 break;
            //             }
            //         }
            //     }
            //     if(b){
            //         h22+=v[i];
            //         ans2++;
            //     }
            //     if(h22>=k){
            //         p2=true;
            //         break;
            //     }
            // }
            // // cout<<"\nyeh hai";
            // loop(j,ve.size()) cout<<ve[j]<<" ";
            if(p1&&p2) cout<<(ans)<<endl;
            else cout<<"-1\n";
        }
    }
    return 0;
}