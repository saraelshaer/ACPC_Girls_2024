#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        ll cnt = 0, f = x;
        while (f < z)
        {
            cnt++;
            f *= 3;
            f += y;
        }
        cout << cnt << "\n";
    }
    return 0;
}
