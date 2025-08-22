#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {

    int n, m;
    cin >> n >> m;
    map<int,int> ma;
    int i = 0;
    while(i < n + m) {
        int x;
        cin >> x;
        ma[x]++;
        i++;
    }
    for(auto x : ma) cout << x.first << ' ';
    cout << endl;
    for(auto x : ma) {
        if(x.second == 2) cout << x.first << ' ';
    }
    cout << endl;

}

int main(){
    
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }

}
