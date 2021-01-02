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
    ll t,n,m,temp,s1,s2,ans,check;
    cin>>t;
    while(t--){
        ans=0;
        s1=s2=0;
        bool b1=true;
        cin>>n>>m;
        priority_queue<int> p2;
        priority_queue<int,vector<int>,greater<int>> p1;
        loop(i,n){
            cin>>temp;
            p1.push(temp);
            s1+=temp;
            if(i==0) check=temp;
            else if(check!=temp) b1=false;
        }
        loop(i,m){
            cin>>temp;
            p2.push(temp);
            s2+=temp;
            if(i==0) check=temp;
            else if(check!=temp) b1=false;
        }
        bool b=true;
        if(s1==s2 && p1.size()==p2.size() && b1){
            cout<<"-1\n";
            b=false;
        }
        else{
            while(s1<=s2&&p1.size()>0&&p2.size()>0){   
                // cout<<p1.top()<<" "<<p2.top()<<" "<<s1<<" "<<s2<<"yep\n";
                if(p1.top()>p2.top()){
                    if(s1<=s2) cout<<"-1\n";
                    b=false;
                    break;
                }
                s1+=(p2.top()-p1.top());
                s2+=(p1.top()-p2.top());
                p1.pop();
                p2.pop();
                ans++;
            }
        }
        if(b){
            if(s1>s2) cout<<ans<<endl;
            else cout<<"-1\n";
        }
        else{
            if(s1>s2) cout<<ans<<endl;
        }
    }
    return 0;
}