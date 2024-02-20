#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const long long INF = 1e18;

void solve(){
    ll n;
    cin >> n;
    for(ll i =1;i<=15;i++){
        if(pow(i,i) == n){
            cout << i;
            return;
        }
    }
    cout << -1;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}