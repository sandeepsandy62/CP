#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    // Your code goes here
    map<char,int>mp;
    char start = 65;
    for(int i = 1 ; i <= 26 ; i++){
        mp[start++] = i ; 
    }

    int n ; 
    string s;
    cin >> n ; cin >> s ;
    unordered_map<char,int>mp1;
    for(int i = 0 ; i < s.length() ; i++){
        mp1[s[i]]++;
    }
    int count = 0 ;
    for(auto x : mp1){
        if(mp1[x.first] >= mp[x.first]){
           count++;
        }
    }

cout <<count << endl;

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