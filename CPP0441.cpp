#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &x : v) {
        cin >> x;
    }
    for(int i = 0 ; i < v.size() ; i++) {
        if(v[i] == x) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;

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
