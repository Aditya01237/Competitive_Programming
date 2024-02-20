#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9+7;
const int INF = 1e9;

ll solve(ll a,ll b,ll M){
    assert(b >= 0);
    a %= M;
    ll res = 1;
    while(b > 0){
        if(b%2 == 1){
            res = res * a % M;
        }
        a = a * a % M;
        b /= 2;
    }
    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll pow = solve(b,c,mod-1);
        cout << solve(a,pow,mod) << endl;
    }
    return 0;
}