#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            long long weight = a[i] * (1LL << i);
            if (weight > c) {
                count++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}