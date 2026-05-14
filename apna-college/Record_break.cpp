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
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll mx = a[0], cnt = 0;
    if (a[0] > a[1])
        cnt++;
    for (ll i = 1; i + 1 < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
            cnt++;
        mx = max(a[i], mx);
    }
    if (mx < a[n - 1])
        cnt++;
    cout << cnt;
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
