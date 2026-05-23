// Author   : Rajesh Biswas
// CF       : rajesh_1920
// Date     : 23.05.2026
// Problem  : https://codeforces.com/problemset/problem/141/A

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
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  multiset<char> st;
  for (auto &it : s1)
    st.insert(it);
  for (auto &it : s2)
    st.insert(it);
  for (auto &it : s3)
  {
    if (st.find(it) == st.end())
    {
      cout << "NO\n";
      return;
    }
    st.erase(st.find(it));
  }
  if (st.empty())
    cout << "YES\n";
  else
    cout << "NO\n";
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