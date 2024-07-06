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
        ll l, r;
        cin >> l >> r;
        ll res = 0;
        ll a = log2(l) + 1, b = log2(r) + 1;
        for (int i = a; i <= b; i++)
        {
            ll sum = (1LL << i) - 1, p = 0;
            for (int j = 0; j < i; j++)
            {
                if (sum - p >= l && sum - p <= r)
                {
                    res++;
                }
                p += (1LL << j);
            }
        }
        cout << res << "\n";
    }
    return 0;
}
