// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  13.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbg(x) cout << #x << " = " << x << '\n'
//------------------------------------------------------------------------------------------
void max_to_i(ll a[], ll n)
{
    ll mx = LONG_LONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        mx = max(a[i], mx);
        cout << mx << ' ';
    }
    cout << '\n';
}
ll sum_of_all_subarray(ll a[], ll n)
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll t = n - i;
        sum += a[i] * t;
        sum += a[i] * t * (i);
    }
    return sum;
}
void solve(void)
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    // max_to_i(a, n);
    cout << sum_of_all_subarray(a, n) << '\n';
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
