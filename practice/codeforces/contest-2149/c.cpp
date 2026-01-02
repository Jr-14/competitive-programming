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

bool comp(int a, int b) {
    return a > b;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n+1];
    fill_n(a, n+1, -1);
    int sum = 0;
    while (n--) {
        int s;
        cin >> s;
        if (s == k) {
            sum++;
            a[s] = 0;
        }
        if (a[s] != -1 && a[s] != 0) {
            sum++;
        } else {
            a[s] = s;
        }
    }

    for (int i = 0; i < n; i++ ) {
        if (a[i] == - 1) {
            sum++;
        }
    }
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
