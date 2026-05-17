// Author   : Rajesh Biswas
// CF       : rajesh_1920
// Date     : 15.05.2026
// Problem  : https://codeforces.com/problemset/problem/339/A

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
    int c1 = 0, c2 = 0, c3 = 0;
    for (auto &it : s)
        if (it == '1')
            c1++;
        else if (it == '2')
            c2++;
        else
            c3++;
    for (int i = 0; i < s.size(); i += 2)
        if (c1)
            s[i] = '1', c1--;
        else if (c2)
            s[i] = '2', c2--;
        else
            s[i] = '3', c3--;
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