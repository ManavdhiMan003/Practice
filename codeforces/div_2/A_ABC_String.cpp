#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(ll i=0;i<n;i++)
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
bool check(string s){
    stack<char> st;
    ll n =s.length();
    // char c;
    // cout<<s<<endl;
    loop(i,n){
        if(s[i]=='('){
            st.push(s[i]);
            continue;
        }
        if(st.empty()){
            return false;
        }
        if(s[i]==')'){
            // c = st.top();
            st.pop();
            // if(c!=s[i]) return false;
        }
    }
    return st.empty();
}
void solve(){
    string s;
    cin>>s;
    ll n=s.length();
    if(s[0]==s[n-1]) cout<<"NO\n";
    else{
        for(ll i=1;i<n-1;i++){
            if(s[i]==s[0]) s[i]='(';
            else if(s[i]==s[n-1]) s[i]=')';
        }
        s[0]='(';
        s[n-1]=')';
        string s2=s;
        // cout<<s<<" "<<s2<<endl;
        bool b=true;
        loop(i,2){
            if(i==0){
                loop(i,n){
                    if(s[i]!='(' && s[i]!=')') s[i]=')';
                }
                // cout<<s<<"yep"<<endl;
                if(check(s)){
                    cout<<"YES\n";
                    // cout<<"HAHAHHAH";
                    b=false;
                    break;
                }
            }
            else{
                loop(i,n){
                    if(s2[i]!='(' && s2[i]!=')') s2[i]='(';
                }
                // cout<<s2<<" yoyoy "<<endl;
                if(check(s2)){
                    cout<<"YES\n";
                    b=false;
                    break;
                }
            }
        }
        if(b) cout<<"NO\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}