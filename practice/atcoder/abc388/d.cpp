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

void Solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Key insights
    // I don't give any stone away until I become an adult
    // The number of stones I have is the number of stones I can give away to adjacent adults

    // ith alien has Ai stones and will become an adult exactly i years later
    
    // Initially no one is an adult
    // Let's start the index at 1 for looping
    // First loop iteration,
    //   A[1] becomes an adult,
    //   and any adults before A[1] gives him a stone (If they have any)
    // Second loop iteration,
    //   A[2] becomes an adult,
    //   and any adults before A[2] gives him a stone (If they have any)
    // ith loop iteration,
    //   A[i] becomes an adult,
    //   and any adults below index i (<i) gives them a stone (If they have any)

    // How many stones do I receive have when I become an adult (It is the current index)
    //   Then number of stones I receive is the number of adult befor me that has at least 1 stone
    //   In other words A[i] += for each adult from A[0] to A[i-1] if adult has at least 1 stone then I get one
    //
    //   How do I know how many adults have at least one stone during the time I become an adult?
    //      THIS IS THE MAIN QUESTION?

    // How many stones do I give away once I become an adult at the end of the loop?
    //   Number of stones to give away = length of array - ith index;
    //
    //  Initially
    //  [1,2,3,4,5,6,7];
    //
    //  On Year 1
    //  [1,2,3,4,5,6,7];
    //   ^
    //  // First index can only give away 1 stone for at least 1 year
    //
    //  On Year 2
    //  [0,3,3,4,5,6,7];
    //     ^
    //  // Second index can only give away a maximum of 3 years
    //
    //  On Year 3
    //  [0,2,4,4,5,6,7];
    //       ^
    //  Third index can give away a maximum of 4 stones to the next 4th indices
    //
    //  Rephrase the question Alien i has Ai stones & and will become and adult in i years
    //  Alien i gives each alien i+1, i+2 + N a stone if he has one
    //  How many stones will the aliens have?
    
    vector<int> c(n), d(n+1);
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            c[i] = c[i - 1] + d[i];
            a[i] += c[i];
        }
        int count = min(n - i - 1, a[i]);
        a[i] -= count;
        d[i+1]++;
        d[min(n, i + count + 1)]--;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
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
