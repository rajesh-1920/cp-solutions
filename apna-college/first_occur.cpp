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
    ll n;
    cin >> n;
    vector<ll> v(n), cnt(1000009), pos(1000009, n + 5);
    ll ans = n + 5;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        cnt[x]++;
        pos[x] = min(pos[x], i);
        if (cnt[x] > 1)
            ans = min(ans, pos[x]);
    }
    cout << ans << '\n';
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
