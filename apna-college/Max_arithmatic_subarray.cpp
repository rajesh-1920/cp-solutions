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
    ll n, mx = 2;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll cnt = 2, dif = a[1] - a[0];
    for (ll i = 2; i < n; i++)
    {
        if (a[i] - a[i - 1] == dif)
            cnt++;
        else
        {
            cnt = 2;
            dif = a[i] - a[i - 1];
        }
        mx = max(mx, cnt);
    }
    cout << mx << ' ';
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
