#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    ll res = 0;
    vector<ll> pre(n, 0);
    pre[0] = arr[0];

    for (ll i = 1; i < n; ++i) {
        pre[i] = pre[i - 1] + arr[i];
    }

    ll i = 1;
    while (i < n) {
        if (n % i != 0) {
            ++i;
            continue;
        }

        vector<ll> num;
        for (ll j = 0; j < n; j += i) {
            ll val = pre[j + i - 1];
            if (j - 1 >= 0) {
                val -= pre[j - 1];
            }

            num.push_back(val);
        }

        ll val = abs(*max_element(num.begin(), num.end()) - *min_element(num.begin(), num.end()));
        if (res < val) {
            res = val;
        }
        ++i;
    }

    cout << res << endl;
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