#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    // Your code goes here
    int n, m, k;
    cin >> n >> m >> k;
    set<int> a, b, c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }

    int counti = 0, countj = 0;
    for (auto x : a)
    {
        if (x <= k)
        {
            counti++;
            c.insert(x);
        }
    }

    for (auto x : b)
    {
        if (x <= k)
        {
            countj++;
            c.insert(x);
        }
    }

int count = 1;
    for(auto x : c){
        if(x == count){
            count++;
        }
    }

    if(count == k+1 && counti >= k/2 && countj >= k/2) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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