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

void Solve() {
    int e, n;
    cin >> e;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;
    while (l < r) {
        int mid = (r + l) / 2;
        if (e > a[mid]) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    if (a[l] == e) {
        cout << l << endl;
    } else {
        cout << "Not found" << endl;
    }

}


int main() {
    Speed();
    int t = 1;
    while (t--) {
        Solve();
    }
    return 0;
}
