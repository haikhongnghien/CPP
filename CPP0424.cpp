#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    int k,n;
    cin >> k >> n;
    vector<int> v;
    while(k--) {
        int i = 0;
        while(i < n) {
            i++;
            int x;
            cin >> x;
            v.push_back(x);
        }
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
