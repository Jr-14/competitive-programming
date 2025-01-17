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
    int n;
    cin >> n;
    vector<int> nv(n);
    while (n--) {
        int j;
        cin >> j;
        nv[n] = j;
    }

    map<int, int> count;
    vector<int> out;
    int i = nv.size() - 1;
    while (i >= 0) {
        int mode = nv[i];
        if (count.find(mode) != count.end()) {
            cout << mode << " not found" << endl;
            count.insert({mode, 1});
        } else {
            cout << "Found: " << mode << endl;
            // int k = count.at(mode);
            // count.insert({mode, k++});
        }
        i--;
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
