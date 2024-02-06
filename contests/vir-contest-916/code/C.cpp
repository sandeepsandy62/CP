#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    // Your code goes here
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> mx_pref(n);
    mx_pref[0] = b[0];
    for (int i = 1; i < n; i++)
    {
        mx_pref[i] = max(b[i], mx_pref[i - 1]);
    }

    int ans = a[0] + (k - 1) * mx_pref[0];
    int sum = a[0];
    for (int i = 1; i < min(n,k); i++)
    {
            sum += a[i];
            ans = max(ans, (sum) + (k - (i + 1)) * mx_pref[i]);
    }

    cout << ans << endl;
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
