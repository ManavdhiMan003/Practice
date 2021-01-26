#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define loop(i,n) for(i=0;i<n;i++)
#define loop1(i,k,n) for(i=k;i<n;i++)
#define pb push_back
typedef long long int ll;
struct rang
{
    char num;
    int id=0;
};
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m, r, g, b;
        cin >> n >> m >> r >> g >> b;
        struct rang col1, col2, col3;
        col1.id = r;
        col1.num = 'R';
        col2.num = 'G';
        col2.id = g;
        col3.id = b;
        col3.num = 'B';
        int temp = 0;
        if (col1.id < col2.id)
        {
            swap(col1, col2);
        }
        if (col1.id < col3.id)
        {
            swap(col1, col3);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp=i+j;
                if (temp % 2 == 0)
                {
                    if (col2.id > 0)
                    {
                        cout << col2.num;
                        col2.id--;
                    }
                    else
                    {
                        cout << col1.num;
                        col1.id--;
                    }
                }
                else
                {
                    if (col3.id > 0)
                    {
                        cout << col3.num;
                        col3.id--;
                    }
                    else
                    {
                        cout << col1.num;
                        col1.id--;
                    }
                }
            }
        cout << endl;
    }
    }
    return 0;
}