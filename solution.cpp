#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        sort(a.begin(), a.end());
        int coins = 0;
        for (int i = 0; i < n; ++i) {
            // a[i] * (1LL << i) is weight after i doublings
            if (a[i] * (1LL << i) > c) coins++;
        }
        cout << coins << '\n';
    }
    return 0;
}