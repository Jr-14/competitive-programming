// Only include if available
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
    int s;
    cin >> s;
    int sum = 0;
    int nc = 0;
    int zeros = 0;
    while (s--) {
        int a;
        cin >> a;
        if (a == -1) {
            nc += 1;
        } else if (a == 0) {
            sum += 1;
        }
    }
    sum += (nc % 2) * 2;
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
