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

int main() {
    Speed();
    int n, d;
    cin >> n >> d;
    vector<vector<int>> s(n);
    for (int i = 0; i < n; i++) {
        int t, l;
        cin >> t >> l;
        s[i] = {t,l};
    }

    for (int k = 1; k <= d; k++) {
        int max_weight = 0;
        for (int j = 0; j < n; j++) {
            int w = s[j][0] * (s[j][1] + k);
            max_weight = max(w, max_weight);
        }
        cout << max_weight << endl;
    }
    return 0;
}
