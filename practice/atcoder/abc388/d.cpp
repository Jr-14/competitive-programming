// https://atcoder.jp/contests/abc388/tasks/abc388_d
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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a[i] = b;
    }

    int bucket = 0;
    for(int i = 0; i < n; i++ ) {
        for (int j = 0; j < i; j++) {
            if (a[j] != 0) {
                a[j] -= 1;
                bucket += 1;
            }
        }
        a[i] += bucket;
        bucket = 0;
        // cout << a[i] << endl;
    }

    for(int i = 0; i < n; i++ ) {
        cout << a[i] << endl;
    }

    return 0;
}
