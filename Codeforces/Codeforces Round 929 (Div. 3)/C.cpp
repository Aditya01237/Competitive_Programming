#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    ll a, b, l;
    cin >> a >> b >> l;
    set<ll> st;
    for (ll x = 0;; x++) {
        ll temp = (ll)pow(a, x);
        if(temp > l)break;
        for (ll y = 0;; y++) {
            ll value = temp * (ll)pow(b, y);
            if(value > l)break;
            else if (l % value == 0) {
                ll k = l / value;
                st.insert(k);
            }
        }
    }
    cout << st.size() << endl;
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