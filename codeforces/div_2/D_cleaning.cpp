#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
void swap(ll *a,ll *b){
    ll t=*a;
    *a=*b;
    *b=t;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t,n,check,s1=0,s2=0;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n];
        s1=0,s2=0;
        bool b=true,ans=false;
        loop(i,n) cin>>a[i];
        if(n==2){
            if(a[0]==a[1]) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            loop(i,n){
                if(i%2){
                    s1+=a[i];
                }
                else s2+=a[i];
            }
            if(s1!=s2){
                ll temp=s1-s2;
                for(ll i=0;i<n-1;i++){
                    if(i%2==0){
                        if(temp-(2*(a[i+1]-a[i]))==0){
                            ans=true;
                            break;
                        }
                    }
                    else{
                        if(temp+(2*(a[i+1]-a[i]))==0){
                            ans=true;
                            break;
                        }
                    }
                }
            }
            else ans=true;
            if(ans) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}