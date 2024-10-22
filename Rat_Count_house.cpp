#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int rat(int r, int unit, int arr[], int n) {
    if (n == 0) {
        return -1;
    }

    int total = r * unit;
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        count++;
        if (sum >= total) {
            return count;
        }
    }
    return -1; // if total units are not achieved
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r, unit, n;
    cin >> r >> unit >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << rat(r, unit, arr, n);

    return 0;
}
