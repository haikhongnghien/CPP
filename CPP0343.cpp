#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {

    FASTER;

    int t;
    cin >> t;
    while(t--) {
        string s;
        vector<int> v;
        getline(cin >> ws,s);
        stringstream ss(s);
        string word;
        while(ss >> word) {
            int x = stoi(word);
            v.push_back(x);
        }
        int c = 0, l = 0;
        for(auto x : v) {
            if(x % 2 == 0) c++;
            else l++;
        }
        if(v.size() % 2 == 0 && c > l || v.size() % 2 == 1 && l > c) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
