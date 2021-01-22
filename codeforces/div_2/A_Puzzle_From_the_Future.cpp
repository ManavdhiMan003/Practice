#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    ll n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        string s2;
        s2='1';
        for(ll i=1;i<n;i++){
            if(s[i]=='1'){
                if(s[i-1]=='1'&&s2[i-1]=='1') s2=s2+'0';
                else s2=s2+'1';
            }
            else{
                if(s2[i-1]=='1'&&s[i-1]=='1') s2=s2+'1';
                else if(s2[i-1]=='0'&&s[i-1]=='0') s2=s2+'1';
                else s2=s2+'0';
            }
        }
        cout<<s2<<endl;
    }
     
}