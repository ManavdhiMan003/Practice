#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, k, n) for (ll i = k; i < n; i++)
#define pb push_back
#define debug cout << (__LINE__)
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
int lcs( string X,string Y ,int m, int n )
{
    int LCSuff[m + 1][n + 1];
    //int i, j;

     int result = 0;

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}


void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << 0 << endl;
    }
    else
    {   
        int n=s1.length(),m=s2.length();
        int mx = lcs(s1,s2,n,m);
        cout << (n  + m  - 2 * mx) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}