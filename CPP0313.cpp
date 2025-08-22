#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    string s;
    getline(cin >> ws, s);
    string a;
    getline(cin >> ws, a);
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word) {
        v.push_back(word);
    }
    for(auto x : v) {
        if(x != a) cout << x << ' ';
    }


}

int main() {
    
    FASTER;
    
    solve();

    return 0;
}
