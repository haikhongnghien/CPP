#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int d = 0;
    for(int i = 0 ; i < v.size() ; i++) {
        for(int j = i + 1 ; j < v.size() ; j++) {
            if(v[i] + v[j] == k) d++;
        }
    }
    cout << d << endl;
}

int main(){
    
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }

}
