#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve() {
    ll n;
    cin >> n;
    ll result = 1;
    while (result <= n) {
        result *= 2;
    }

    cout << result / 2 << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}