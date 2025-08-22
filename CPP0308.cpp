#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    string s;
    cin >> s;
    int d[100] = {0};
    for(int i = 0 ; i < s.size() ; i++) {
        d[s[i]]++;
    }
    for(int i = 0 ; i < s.size() ; i++) {
        if(d[s[i]] == 1) cout << s[i];
    }
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
