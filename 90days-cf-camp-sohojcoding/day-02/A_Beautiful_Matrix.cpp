// Author   : Rajesh Biswas
// CF       : rajesh_1920
// Date     : 15.05.2026
// Problem  : https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    for (int i = 0; i < 5; i++)
        for (int j = 0, t; j < 5; j++)
        {
            cin >> t;
            if (t)
            {
                cout << abs(2 - i) + abs(2 - j) << '\n';
                return;
            }
        }
}
//-----------------------------------------------------------------------------------------
signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}