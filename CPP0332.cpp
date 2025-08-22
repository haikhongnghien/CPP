#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

void solve() {
    
    string s;
    getline(cin >> ws, s);
    stringstream ss(s);
    vector<string> v;
    string word;
    while(ss >> word) {
        v.push_back(word);
    }
    for(auto &x : v) {
        for(char &c : x) c = tolower(c);
    }
    cout << v[v.size() - 1];
    for(int i = 0 ; i < v.size() - 1 ; i++) {
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";


}

int main() {
    
    FASTER;
    
    solve();

    return 0;
}
