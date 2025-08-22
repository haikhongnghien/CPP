#include <bits/stdc++.h>
#define FASTER cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

using namespace std;

int main() {
    
    FASTER;
    int t; 
    cin >> t; 
    string d101 = "ABBADCCABDCCABD";
    string d102 = "ACCABCDDBBCDDBB";
    while(t--) {
        long long n;
        cin >> n;
        double sum = 0;
        if(n == 101) {
            for(int i = 0 ; i < d101.size() ; i++) {
                char c;
                cin >> c;
                if(c == d101[i]) sum += 2.0/3;
            }
        }
        else if(n == 102) {
            for(int i = 0 ; i < d102.size() ; i++) {
                char c;
                cin >> c;
                if(c == d102[i]) sum += 2.0/3;
            }
        }
        cout << fixed << setprecision(2) << sum << endl;
    }

    return 0;
}
