// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  13.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbg(x) cout << #x << " = " << x << '\n'
//------------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> a[i][j];
    ll row_st = 0, col_st = 0, row_end = n - 1, col_end = m - 1;
    while (row_st <= row_end && col_st <= col_end)
    {
        for (ll j = col_st; j < col_end; j++)
            cout << a[row_st][j] << ' ';
        for (ll i = row_st; i < row_end; i++)
            cout << a[i][col_end] << ' ';
        for (ll j = col_end; j > col_st; j--)
            cout << a[row_end][j] << ' ';
        for (ll i = row_end; i > row_st; i--)
            cout << a[i][col_st] << ' ';
        row_st++;
        col_st++;
        row_end--;
        col_end--;
    }
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
