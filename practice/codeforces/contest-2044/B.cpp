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
    string b;
    cin >> b;
    string out;
    int i = b.size() - 1;
    while (i >= 0) {
        if (b[i] == 'q') {
            out += 'p';
        } else if (b[i] == 'p') {
            out += 'q';
        } else {
            out += 'w';
        }
        i--;
    }
    cout << out << endl;
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
