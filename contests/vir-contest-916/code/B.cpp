#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    // Your code goes here
   int n , k ; cin >> n >> k ;
   for(int i = n-k ; i >= 1 ; i--){
    cout << i << " ";
   }
   for(int i = n-k+1 ; i <= n ; i++){
    cout << i << " ";
   }
   cout << endl;

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