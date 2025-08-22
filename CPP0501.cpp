#include <bits/stdc++.h>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct Point{
    double x,y;
};

void input(struct Point &a) {
    cin >> a.x >> a.y;
}

double distance(struct Point a, struct Point b) {
    return sqrt(pow((b.x - a.x),2) + pow((b.y - a.y), 2));
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
