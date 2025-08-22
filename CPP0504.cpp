#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct SinhVien{
    string name,ma,date;
    double gpa;
};

void nhap(struct SinhVien &a) {
    getline(cin >> ws, a.name);
    getline(cin >> ws, a.ma);
    getline(cin >> ws, a.date);
    cin >> a.gpa;
}

void in(struct SinhVien a) {
    cout << "B20DCCN001" << ' ';
    cout << a.name << ' ' << a.ma << ' ';
    stringstream ss(a.date);
    string d,m,y;
    getline(ss,d,'/');
    getline(ss,m,'/');
    getline(ss,y,'/');
    if(d.size() == 1) d = "0" + d;
    if(m.size() == 1) m = "0" + m;
    cout << d << '/' << m << "/" << y << ' ';
    cout << fixed << setprecision(2) << a.gpa << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
