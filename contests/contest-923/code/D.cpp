#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void setDist(int a , vector<pair<int,bool>>&dist){
    for(int i = 0 ; i < dist.size() ; i++){
        if(dist[i].first == a){
            dist[i].second = false;
        }
    }
}

bool getDist(int a , vector<pair<int,bool>>&dist){
    for(int i= 0 ; i < dist.size() ; i++){
        if(dist[i].first == a){
            return dist[i].second;
        }
    }
    return true;
}

void solve() {
    // Your code goes here
    int n ; cin >> n ;
    vector<int>a(n);
    set<int>st;
    for(int i = 0 ; i < n ; i++) {
        cin>>a[i];
        st.insert(a[i]);
    }
    vector<pair<int,bool>>dist;
    for(auto x : st){
        dist.push_back({x,true});
    }
    int q ; cin >> q ;
    while(q--){
        int l , r ;
        cin >> l >> r;
        vector<pair<int,pair<int,int>>>p;
        int ans = 1;
        p.push_back({ans,{1,1}});
        ans++;
        int startIndex = 1 , endIndex = 1;
        setDist(a[0] , dist);
        for(int i = 1 ; i < n ; i++){
            if(getDist(a[i],dist) == true){
                p.push_back({ans,{startIndex,i}});
                setDist(a[i],dist);
                endIndex = i;
                ans++;
            }else{
                p.push_back({ans,{startIndex,i}});
            }
        }
        for(auto x : p){
            cout << "count ; " << x.first << "indexs : " << x.second.first << x.second.second << endl;
        }
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