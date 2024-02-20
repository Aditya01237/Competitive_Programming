#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

long long nCr(int n, int r) {
    long long result = 1;
    for (int i = 0; i < r; ++i) {
        result = (result * (n - i)) / (i + 1);
    }
    return result;
}

void solve(){
    ll n,m,t;
    cin >> n >> m >> t;
    cout << (nCr(n,4)*nCr(m,1) + ((t-5 == 0) ? 0 : nCr(n+m-5,t-5)))%mod;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}