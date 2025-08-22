#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    string s;
    cin >> s;
    int l = 0, r = s.size() - 1;
    while(l <= r) {
        if(s[l] != s[r]) {
            cout << "NO\n";
            return;
        }
        if((s[l] - '0') % 2 != 0 || (s[r] - '0') % 2 != 0) {
            cout << "NO\n";
            return;
        }
        l++;
        r--;
    }
    cout << "YES\n";

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
