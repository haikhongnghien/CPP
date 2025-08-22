#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int i = 1 ; ; i++) {
        if(s.find(i) == s.end()) {
            cout << i << endl;
            return;
        }
    }
    
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
