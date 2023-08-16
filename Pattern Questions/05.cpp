#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

void solve()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*"
                 << " ";
        }
        
        cout << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(10) << fixed;

    int testCases = 1;
    // cin >> testCases;
    while (testCases--)
        solve();
}
