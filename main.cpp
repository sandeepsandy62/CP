#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    // Your code goes here
    int n;
    cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end(),greater<int>());
    sort(b.begin(), b.end(),greater<int>());

    for(int i = 0 ; i < n ; i++) cout << a[i] << " "; 
    cout << endl;
    for(int i = 0 ; i < n ; i++) cout << b[i] << " ";
    cout << endl;

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