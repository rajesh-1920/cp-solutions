// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  13.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbg(x) cout << #x << " = " << x << '\n'
//------------------------------------------------------------------------------------------
ll binary_to_decimal(string bin)
{
    ll dec = 0, p = 1;
    for (ll i = bin.size(); i > 0; i--)
    {
        dec += p * (bin[i - 1] - '0');
        p *= 2;
    }
    return dec;
}
ll octal_to_decimal(string octal)
{
    ll dec = 0, p = 1;
    for (ll i = octal.size(); i > 0; i--)
    {
        dec += p * (octal[i - 1] - '0');
        p *= 8;
    }
    return dec;
}
ll hexca_to_decimal(string hexa)
{
    ll dec = 0, p = 1;
    for (ll i = hexa.size(); i > 0; i--)
    {
        if (hexa[i - 1] >= '0' && hexa[i - 1] <= '9')
            dec += p * (hexa[i - 1] - '0');
        else
            dec += p * (hexa[i - 1] - 'A' + 10);
        p *= 16;
    }
    return dec;
}
//------------------------------------------------------------------------------------------
string decimal_to_binary(ll dec)
{
    string bin;
    if (dec == 0)
        bin.push_back('0');
    while (dec)
    {
        bin += to_string(dec % 2);
        dec >>= 1;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
string decimal_to_octal(ll dec)
{
    string bin;
    if (dec == 0)
        bin.push_back('0');
    while (dec)
    {
        bin += to_string(dec % 8);
        dec /= 8;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
string decimal_to_hexa(ll dec)
{
    string bin;
    if (dec == 0)
        bin.push_back('0');
    while (dec)
    {
        if (dec % 16 < 10)
            bin += to_string(dec % 16);
        else
            bin.push_back((char)('A' + dec % 16 - 10));
        dec /= 16;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
//------------------------------------------------------------------------------------------
void solve(void)
{
    ll n;
    cin >> n;
    // cout << binary_to_decimal(n) << '\n';
    // cout << octal_to_decimal(n) << '\n';
    // cout << hexca_to_decimal(n) << '\n';
    // cout << decimal_to_binary(n) << '\n';
    // cout << decimal_to_octal(n) << '\n';
    cout << decimal_to_hexa(n) << '\n';
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
