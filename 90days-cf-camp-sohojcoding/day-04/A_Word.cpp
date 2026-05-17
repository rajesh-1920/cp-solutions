// Author   : Rajesh Biswas
// CF       : rajesh_1920
// Date     : 16.05.2026
// Problem  : https://codeforces.com/problemset/problem/59/A

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
    string s;
    cin >> s;
    int ca = 0, cb = 0;
    for (auto &it : s)
        if (it >= 'A' && it <= 'Z')
            ca++;
        else
            cb++;
    if (ca > cb)
        for (auto &it : s)
            it &= '_';
    else
        for (auto &it : s)
            it |= ' ';
    cout << s << '\n';
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