#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    string s;
    cin >> s;
    int d = 0;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == s[i + 1]) d++;
        else {
            cout << s[i] << d + 1;
            d = 0;
        }
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
