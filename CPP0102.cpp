#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if(s[0] >= 'a' && s[0] <= 'z') {
            s[0] = toupper(s[0]);
        }
        else s[0] = tolower(s[0]);
        cout << s << endl;
    }

    return 0;
}
