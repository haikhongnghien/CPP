#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int binarysearch(vector<int> &v, int x) {
    int l = 0, r = v.size() - 1;
    int mid = (l + r) / 2;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(v[mid] == x) return 1;
        else if(v[mid] > x) r = mid - 1;
        else l = mid + 1;
        
    }
    return 0;
}

void solve() {

    int n;
    cin >> n;
    set<int> s;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(), s.end());
    if(v.size() < 2) cout << -1 << endl;
    else cout << v[0] << ' ' << v[1] << endl; 

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
