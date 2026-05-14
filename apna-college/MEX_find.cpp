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
    vector<ll> v(n + 5, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= 0 && x <= n)
            v[x] = 1;
    }
    for (ll i = 0; i <= n + 1; i++)
        if (v[i] == 0)
        {
            cout << i << '\n';
            return;
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
