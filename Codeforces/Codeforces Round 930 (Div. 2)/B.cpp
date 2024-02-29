#include <iostream>
#include <vector>
#include <climits>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    vector<vector<string>> dp(2, vector<string>(n, "11111111111111111"));

    dp[0][0] = s1[0];
    dp[1][0] = s2[0];

    for (int j = 1; j < n; j++) {
        dp[0][j] = min(dp[0][j - 1] + s1[j], dp[1][j - 1] + s1[j]);
        dp[1][j] = min(dp[1][j - 1] + s2[j], dp[0][j - 1] + s2[j]);
    }

    string smallest = min(dp[0][n - 1], dp[1][n - 1]);
    int count = 0;

    for (int i = 0; i < 2; i++) {
        if (dp[i][n - 1] == smallest) {
            count++;
        }
    }

    cout << smallest << endl;
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
