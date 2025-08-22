#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    int n; 
    cin >> n;
    vector<long long> v;
    for(int i = 0 ; i < n ; i++) {
        long long x;
        cin >> x;
        if(x > 0) v.push_back(x);
    }
    while(v.size() < n) {
        v.push_back(0);
    }
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
