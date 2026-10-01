#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];

        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;

        i--;
    }

    arr[i + 1] = key;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}