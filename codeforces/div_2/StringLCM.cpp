#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
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
int gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int q;
    string s,t;
    cin>>q;
    while(q--){
        cin>>s>>t;
        int temp=lcm(s.length(),t.length());
        int div=s.length();
        string fs=s,ft=t;
        // cout<<temp/div;
        for(int i=1;i<temp/div;i++){
            fs=fs+s;
            // cout<<"yes";
        }
        // cout<<fs;
        div=t.length();
        for(int i=1;i<temp/div;i++){
            ft=ft+t;
        }
        if(fs==ft) cout<<fs<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}