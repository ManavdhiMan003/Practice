#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
bool check(ll n,int d){
    while(n){
        if(n%10==d) return true;
        n/=10;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,d;
    ll q;
    cin>>t;
    while(t--){
        cin>>q>>d;
        ll temp;
        while(q--){
            cin>>temp;
            bool b=false;
            if(temp>=d*10) b=true;;
            if(b==false){
                while(temp>=d){
                    if(temp%d==0){
                        b=true;
                        break;
                    }
                    temp-=10;
                }
            }
            if(b) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}