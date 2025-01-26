// https://atcoder.jp/contests/abc388/tasks/abc388_c
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

}


int main() {
    Speed();
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        m[i] = a;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (m[j] / m[i] > 1) {
                count += n -j;
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}
