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
    int t;
    cin >> t;
    vector<int> v1;
    while (t--) {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    
    sort(v1.begin(), v1.end(), comp);
    int diff = 0;
    for (int i = 0; i < v1.size(); i += 2) {
        int a, b;
        a = v1[i];
        b = v1[i+1];
        int ab = abs(a-b);
        if (ab > diff) {
            diff = ab;
        }
    }

    cout << diff << endl;
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
