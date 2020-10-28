#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
bool prime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void print(int x,int n){
    for(int i=0;i<n;i++){
        loop(j,n){
            if(i+j==n-1) cout<<"1 ";
                else cout<<x<<" ";
            }
        cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(prime(n)||n==1){
            loop(i,n){
                loop(j,n) cout<<"1 ";
                cout<<endl;
            }
        }
        else{
            int x=0,inc=n-1,p=1;
            while(1){
                x++;
                p+=inc;
                if(!prime(x)){
                    if(prime(p)){
                        // cout<<x<<" "<<p<<"y ";
                        break;
                    }
                }
            }
            print(x,n);
        }
    }
    return 0;
}