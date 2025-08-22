#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    vector<int> v(n);
    int d[100001] = {0};
    int dem = 0;
    for(auto &x : v) {
        cin >> x;
        d[x]++;
    }
    sort(v.begin(),v.end());
    int l = v[0], r = v[v.size() - 1];
    for(int i = l ; i <= r ; i++) {
        if(d[i] == 0) dem++;
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
