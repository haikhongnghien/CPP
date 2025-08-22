#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    string s;
    getline(cin >> ws,s);
    int n; cin >> n;
    set<char> se;
    for(int i = 0 ; i < s.size() ; i++) se.insert(s[i]);
    if(n + se.size() >= 'z' - 'a' + 1) cout << 1 << ' ';
    else cout << 0 << ' ';
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
