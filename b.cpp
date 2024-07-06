#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, h;
    cin >> a >> h;
    if (a > h)
        cout << "A";
    else if (a < h)
        cout << "H";
    else
        cout << "D";
    return 0;
}
