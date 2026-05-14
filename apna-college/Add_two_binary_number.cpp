// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  13.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbg(x) cout << #x << " = " << x << '\n'
//------------------------------------------------------------------------------------------
string add(string b1, string b2)
{
    string ans;
    reverse(b1.begin(), b1.end());
    reverse(b2.begin(), b2.end());
    while (b1.size() > b2.size())
        b2.push_back('0');
    while (b1.size() < b2.size())
        b1.push_back('0');
    ll carry = 0;
    for (ll i = 0; i < b1.size(); i++)
    {
        if (carry + (b1[i] - '0') + (b2[i] - '0') == 0)
        {
            ans.push_back('0');
            carry = 0;
        }
        else if (carry + (b1[i] - '0') + (b2[i] - '0') == 1)
        {
            ans.push_back('1');
            carry = 0;
        }
        else if (carry + (b1[i] - '0') + (b2[i] - '0') == 2)
        {
            ans.push_back('0');
            carry = 1;
        }
        else if (carry + (b1[i] - '0') + (b2[i] - '0') == 3)
        {
            ans.push_back('1');
            carry = 1;
        }
    }
    if (carry)
        ans.push_back('1');
    reverse(ans.begin(), ans.end());
    return ans;
}
void solve(void)
{
    string b1, b2;
    cin >> b1 >> b2;
    cout << add(b1, b2) << '\n';
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
