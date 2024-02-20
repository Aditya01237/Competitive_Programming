#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> arr(n);
    for(ll i=0;i<n;i++){
        ll a,b;
        cin >> a >> b;
        arr[i] = {a,b};
    }
    sort(arr.begin(),arr.end());
    ll ans = 0;
    ll ct = 0;
    for(auto &x:arr){
        ct += x.first;
        ans += (x.second-ct);
    }
    cout << ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}