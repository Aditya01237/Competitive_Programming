#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;


/*

200 201 202 203 204 205 206 207 208 209 210

2 3 4 5 6 7 8 9 10 11 3



1 2 3 4 5 6 7 8 9 2 = 47

*/
void solve(){
    ll n;
    cin >> n;
    ll a = 46;
    ll d = 10;
    ll N = floor(n/10);
    ll sum = (N/2.0)*(2*a + (N-1)*d);
    ll left = n%10;
    for(ll i=n-left+1;i<=n;i++){
        ll temp = i;
        ll sum1 = 0;
        while(temp){
            sum1 += temp%10;
            temp /= 10;
        }
        sum += sum1;
    }
    cout << sum << endl;
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