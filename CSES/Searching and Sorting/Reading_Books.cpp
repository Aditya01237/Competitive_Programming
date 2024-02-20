#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    ll n,m = 0,s = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        m = max(m,a);
        s += a;
    }
    cout << (m > (s-m) ? 2*m : s);
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}