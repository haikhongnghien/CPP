#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    string s;
    cin >> s;
    int d = 0;
    for(int i = 0 ; i < s.size() ; i++) {
        for(int j = i + 1 ; j < s.size() ; j++) {
            if(s[i] == s[j]) d++;
        }
    }
    cout << d + s.size()<< endl;

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
