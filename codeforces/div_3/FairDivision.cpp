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
    ll t,n,temp,one,two,sum;
    cin>>t;
    while(t--){
        cin>>n;
        one=two=0;
        sum=0;
        loop(i,n){
            cin>>temp;
            sum+=temp;
            if(temp==1) one++;
            else two++;
        }
        if(sum%2) cout<<"NO\n";
        else{
            if(two%2){
                ll ans=(two/2);
                ans*=2;
                ll ve=sum/2;
                ve=ve-ans;
                one=one-ve;
                if(one>=0){
                    if(one+(two/2+1)*2==sum/2) cout<<"YES\n";
                    else cout<<"NO\n";
                }
                else cout<<"NO\n"; 
            }
            else cout<<"YES\n";
        }
    }
    return 0;
}