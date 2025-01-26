// https://atcoder.jp/contests/abc388/tasks/abc388_c
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAXN 500005

/**
 * Speed up cin and cout
 */
void Speed() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int a[MAXN];

int main() {
    Speed();
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }

    ll count = 0;
    for (int i = 1, j = 1; i <= n; i++) {
        while(a[j] <= a[i] / 2) {
            j++;
        }
        count += j - 1LL;
    }

    cout << count << "\n";
    return 0;
}
