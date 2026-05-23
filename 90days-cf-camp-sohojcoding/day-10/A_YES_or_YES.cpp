// Author   : Rajesh Biswas
// CF       : rajesh_1920
// Date     : 23.05.2026
// Problem  : https://codeforces.com/problemset/problem/1703/A

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
  s[0] &= '_';
  s[1] &= '_';
  s[2] &= '_';
  if (s != "YES")
    s = "NO";
  cout << s << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
{
  cout << fixed << showpoint << setprecision(12);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test = 1, T;
  cin >> test;
  for (T = 1; T <= test; T++)
  {
    // cout << "Case " << T << ": ";
    solve();
  }
  return 0;
}