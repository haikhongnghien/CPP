#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct ThiSinh{
    string name;
    string date;
    double d1,d2,d3;
};

void nhap(struct ThiSinh &a) {
    getline(cin >> ws , a.name);
    getline(cin >> ws , a.date);
    cin >> a.d1 >> a.d2 >> a.d3;
}

void in(struct ThiSinh a) {
    cout << fixed << setprecision(1) << a.name << ' ' << a.date << ' ' << a.d1 + a.d2 + a.d3 << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
