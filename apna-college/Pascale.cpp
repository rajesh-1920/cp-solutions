// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  13.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//------------------------------------------------------------------------------------------
ll fact(ll n)
{
    ll f = 1;
    for (ll i = 1; i <= n; i++)
        f *= i;
    return f;
}
void solve(void)
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j < n - i; j++)
            cout << ' ';
        for (ll j = 0; j <= i; j++)
        {
            ll fc = fact(i) / (fact(j) * fact(i - j));
            cout << fc << ' ';
        }
        cout << '\n';
    }
}
//------------------------------------------------------------------------------------------
int main()
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
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/