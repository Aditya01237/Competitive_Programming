#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll res = 0;
    for(auto x:mp){
        res += x.second*(x.second-1)/2;
    }
    res += mp[1]*mp[2];
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