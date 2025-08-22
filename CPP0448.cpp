#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int lowerbound(vector<int> &v, int x) {
    int l = 0, r = v.size() - 1;
    int res;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(v[mid] >= x) {
            res = mid;
            r = mid - 1;
        }   
        else l = mid + 1;
        
    }
    return res;
}

int upperbound(vector<int> &v, int x) {
    int l = 0 , r = v.size() - 1;
    int res;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(v[mid] <= x) {
            res = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return res;
}

void solve() {

    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    auto it1 = lower_bound(v.begin(),v.end(),k);
    auto it2 = upper_bound(v.begin(),v.end(),k);
    if(it1 == v.end() || *it1 != k) cout << -1 << endl;
    else cout << it2 - it1<< endl; 

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
