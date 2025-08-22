#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    string s;
    getline(cin >> ws,s);
    stringstream ss(s);
    string word;
    int dem = 0;
    while(ss >> word) {
        dem++;
    }
    cout << dem << endl;

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
