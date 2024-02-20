#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int all = 0;
    for (int i = 1; i <= n; i++) {
        all ^= i;
    }

    int encoded = arr[0];
    for (int i = 1; i < n - 1; i++) {  // Start from index 1 instead of 0
        encoded ^= arr[i];
    }

    vector<int> ans(n);
    ans[0] = encoded ^ all;
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] ^ arr[i - 1];
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
