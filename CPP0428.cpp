#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    int n,m;
    cin >> n >> m;
    vector<int> v(n + m);
    for(auto &x : v) {
        cin >> x;
    }
    sort(v.begin(),v.end());
    for(auto x : v) cout << x << ' ';
    cout << endl;

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
