#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> a(5);

    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    long long total = 0;

    for(int i = 0; i < 5; i++) {
        total += a[i];
    }

    long long minSum = total - *max_element(a.begin(), a.end());
    long long maxSum = total - *min_element(a.begin(), a.end());

    cout << minSum << " " << maxSum;

    return 0;
}