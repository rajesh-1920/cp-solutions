// Author   : Rajesh Biswas
// CF       : rajesh_1920
// Date     : 21.05.2026
// Problem  : https://codeforces.com/problemset/problem/148/A

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
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  vector<int> v(d + 1, 0);
  for (int i = k; i <= d; i += k)
    v[i] = 1;
  for (int i = l; i <= d; i += l)
    v[i] = 1;
  for (int i = m; i <= d; i += m)
    v[i] = 1;
  for (int i = n; i <= d; i += n)
    v[i] = 1;
  n = 0;
  for (auto &it : v)
    n += it;
  cout << n << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
{
  cout << fixed << showpoint << setprecision(12);
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