// https://codeforces.com/problemset/problem/372/A

#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool comp(int a, int b) {
    return a < b;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), comp);
}


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
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
