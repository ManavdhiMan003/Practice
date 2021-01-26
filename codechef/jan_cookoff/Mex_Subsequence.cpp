#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
int mod = 1000000007;
long long binpowmod(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n+1),dp(n+1),pre(n+1),vese(n+1);
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(mp.find(a[i])==mp.end()) mp[a[i]]=0;
            else mp[a[i]]++; 
        }
        int mex=0;
        while(mp[mex]!=0) mex++;
        if(mex==0){
            cout<<binpowmod(2,n-1,mod)<<endl;
            continue;
        }
        multiset<int> id;
        for(int i=0;i<mex;i++){
            id.insert(0);
            // vese[i]=0;
        }
        dp[0]=1;
        pre[0]=1;
        for(int i=1;i<=n;i++){
            if(a[i]<mex){
                auto it=id.find(vese[a[i]]);
                id.erase(it);
                vese[a[i]]=i;
                id.insert(i);
            }
            int pid = (*id.begin());
            if(pid!=0){
                dp[i] = pre[pid-1];
            }
            pre[i] = (pre[i-1]+dp[i])%mod; 
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}