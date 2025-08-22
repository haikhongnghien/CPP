#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    set<string> se;
    while(n--) {
        string s;
        getline(cin >> ws,s);
        se.insert(s);
    }
    cout << se.size() << endl;

}

int main() {
    
    FASTER;
    
    solve();

    return 0;
}
