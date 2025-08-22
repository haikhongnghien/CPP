#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    set<int> s;
    while(n--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(auto x : s) cout << x << ' ';

}

int main() {
    
    FASTER;
    solve();

    return 0;
}
