#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, n;
    cin >> V;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == V) {
            cout << mid;
            return 0;
        }
        else if (arr[mid] < V) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return 0;
}