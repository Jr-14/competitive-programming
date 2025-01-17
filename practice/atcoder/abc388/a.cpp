// https://atcoder.jp/contests/abc388/tasks/abc388_a
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
    string s;
    cin >> s;

    string out;
    out += s[0];
    out += "UPC";
    cout << out << endl;
    return 0;
}
