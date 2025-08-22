#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string Min(int m , int s) {

    string r(m, '0');
    r[0] = '1'; s -= 1;
    for(int i = m - 1 ; i >= 0 ; i--) {
        int d = r[i] - '0';
        if(s > 9 - d) {
            r[i] = '9';
            s -= 9 - d;
        }
        else {
            r[i] += s;
            break;
        }
    }
    return r;

}

string Max(int m , int s) {

    string r(m, '0');
    for(int i = 0 ; i < m ; i++) {
        int d = r[i] - '0';
        if(s > 9 - d) {
            r[i] = '9';
            s -= 9 - d;
        }
        else {
            r[i] += s;
            break;
        }
    }
    return r;

}

int main() {

    FASTER;

    int m, s;
    cin >> m >> s;
    if(s <= 0 || s > 9 * m) cout << -1 << ' ' << -1;
    else cout << Min(m,s) << ' ' << Max(m,s) << endl;

    return 0;
}
