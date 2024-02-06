#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    // Your code goes here
    int n; cin >> n ;
    string s ; cin >> s ;

    int start = 0 , end = 0 ;

    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'B'){
            start = i;
            break;
        }
    }

    for(int i = n-1 ; i >= 0 ; i--){
        if(s[i] == 'B'){
            end = i;
            break;
        }
    }

    if(end == 0 && start == 0){
        cout << 0 << endl;
    }else{
        cout << end-start+1 << endl ;
    }
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