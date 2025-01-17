#include <bits/stdc++.h>

using namespace std;

#define ll long long

/**
 * Speed up cin and cout
 */
void Speed() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int m, a, b, c;
    int sum = 0;
    cin >> m >> a >> b >> c;
    int al = min(m, a);
    int bl = min(m ,b);
    int cl = min(m - al, c);
    sum += (al + bl + cl);
    c -= cl;
    sum += min(m - bl, c);
    cout << sum << endl;
}


int main() {
    Speed();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
