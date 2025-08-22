#include <bits/stdc++.h>

#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

int main() {
    
    FASTER;
    int t; 
    cin >> t;
    while(t--) {
        double xa,ya,xb,yb;
        cin >> xa >> ya >> xb >> yb;
        double d = sqrt(pow(xb-xa,2) + pow(yb-ya, 2));
        cout << fixed << setprecision(4) << d << endl;  
    }

    return 0;
}
