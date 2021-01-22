#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
vector<int> check(ll a[],int n,int x){
    multiset<int> s;
    // cout<<"yep ";
    for(int i=0;i<2*n;i++){
        s.insert(a[i]);
        // cout<<a[i]<<" ";
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        auto it=s.end();
        it--;
        int y=x-*it;
        s.erase(it);
        auto it2=s.find(y);
        if(it2==s.end()){
            // cout<<"hah ";
            return {};
        }
        v.pb(x- y);
        v.pb(y);
        x = max(x-y,y);
        s.erase(it2);
    }
    return v;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,n,x;    
    cin>>t;
    while(t--){
        cin>>n;
        ll a[2*n];
        // n=n;
        bool b=true;
        for(int i=0;i<2*n;i++) cin>>a[i];
        sort(a,a+2*n);
        // sum=a[n-1]+a[n-2];
        for(int i=0;i<2*n-1;i++){
            x=a[i]+a[2*n-1];
            vector<int> v=check(a,n,x);
            // cout<<"yo ";
            if(v.size()){
                cout<<"YES\n";  
                cout<<x<<endl; 
                for(int j=0;j<n;j++){
                    cout<<v[2*j]<<" "<<v[2*j+1]<<endl;
                }
                b=false;
                break;
            }
        }
        if(b) cout<<"NO\n";
    }
}