#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    map<int,int> m;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    int d = 0;
    for(auto x : m) {
        if(x.second >= 2) d += x.second;
    }
    cout << d << endl;

}

int main() {
    
    FASTER;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
