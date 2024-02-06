#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    // Your code goes 
    int n ; cin >> n ;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    unordered_map<int,vector<char>>mp;

    for(int i = 0 ; i < 26 ; i++){
        mp[0].push_back(97+i);
    }
    string s = "";

    for(int i = 0 ; i < n ; i++){
        int lastElementIndex = mp[a[i]].size() ; 
        char lastElementValue = mp[a[i]][lastElementIndex-1];
        s += lastElementValue;
        mp[a[i]].pop_back();
        mp[a[i]+1].push_back(lastElementValue);
    }

    cout << s << endl;

}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}