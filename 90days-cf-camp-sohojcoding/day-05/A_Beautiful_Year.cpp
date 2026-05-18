// Author   : Rajesh Biswas
// CF       : rajesh_1920
// Date     : 18.05.2026
// Problem  : https://codeforces.com/problemset/problem/271/A

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
    int n;
    cin >> n;
    int ans = 99999;
    for (int i = 1; i <= 9; i++)
        for (int ii = 0; ii <= 9; ii++)
            for (int iii = 0; iii <= 9; iii++)
                for (int iiii = 0; iiii <= 9; iiii++)
                    if (i != ii && i != iii && i != iiii && ii != iii && ii != iiii && iii != iiii)
                    {
                        int t = i * 1000 + ii * 100 + iii * 10 + iiii;
                        if (t > n)
                            ans = min(ans, t);
                    }
    cout << ans << '\n';
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