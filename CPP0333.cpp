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
    for(int i = 0 ; i < v.size() - 1; i++) {
        v[i][0] = toupper(v[i][0]);
        if(i != v.size() - 2) cout << v[i] << " ";
        else cout << v[i] << ", ";
    }
    for(int i = 0 ; i < v[v.size() - 1].size() ; i++) {
        v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
        cout << v[v.size() - 1][i];
    }


}

int main() {
    
    FASTER;
    
    solve();

    return 0;
}
