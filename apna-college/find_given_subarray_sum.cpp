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
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (auto &it : v)
        cin >> it;
    ll i = 0, j = 0, sum = 0;
    while (i < n)
    {
        if (sum == s)
        {
            cout << i + 1 << ' ' << j << '\n';
            return;
        }
        if (sum < s && j < n)
            sum += v[j++];
        else
            sum -= v[i++];
    }
    cout << -1;
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
