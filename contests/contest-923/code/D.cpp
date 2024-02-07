#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    // Your code goes here
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    vector<int> pref(n, -1);
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1];
        if (a[i] != a[i - 1])
        {
            pref[i] = i - 1;
        }
    }
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l -= 1;
        r -= 1;
        if (pref[r] < l)
        {
            cout << "-1 -1" << endl;
        }
        else
        {
            cout << pref[r] + 1 << " " << r + 1 << endl;
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}