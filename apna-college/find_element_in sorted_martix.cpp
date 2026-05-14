// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  15.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbg(x) cout << #x << " = " << x << '\n'
//------------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m;
    cin >> n >> m;
    ll a[n + 1][m + 1];
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= m; j++)
            cin >> a[i][j];
    ll tar;
    cin >> tar;
    ll r = 1, c = m;
    while (r <= n && c > 0)
    {
        if (a[r][c] == tar)
        {
            cout << r << ' ' << c;
            return;
        }
        if (a[r][c] > tar)
            c--;
        else
            r++;
    }
    cout << "NOT FOUND\n";
}
//------------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int test = 1, T;
    for (T = 1; T <= test; T++)
        solve();
    return 0;
}
