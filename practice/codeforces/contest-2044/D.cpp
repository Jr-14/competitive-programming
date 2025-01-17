#include <bits/stdc++.h>
#include <unordered_map>

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
    int t;
    vector<int> nv;
    cin >> t;
    while (t--) {
        int j;
        cin >> j;
        nv.push_back(j);
    }

    unordered_map<int, int> m;
    vector<int> out;

    for (int n : nv) {
        if (m.try_emplace(n, 1)) {
            continue;
        }
    }
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
