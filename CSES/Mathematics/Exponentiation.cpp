#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

ll solve(ll a,ll b){
    if(b == 0)return 1;
    if(b%2 == 0){
        return solve((a*a)%mod,b/2);
    }else{
        return (a * solve((a*a)%mod,(b-1)/2))%mod;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
    return 0;
}