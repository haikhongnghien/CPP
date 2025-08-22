#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    set<int> s;
    for(int i = 0 ; i < n ; i++) {
        while(a[i]) {
            s.insert(a[i] % 10);
            a[i] /= 10;
        }
    }
    for(auto x : s) cout << x << " ";
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
