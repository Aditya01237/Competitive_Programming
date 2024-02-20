#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int x,y,k;
    cin >> x >> y >> k;
    if(x > y){
        cout << x << endl;
        return;
    }
    if(x+k < y){
        cout << x+k+ (2*(y-(x+k))) << endl;
        return;
    }
    if(x+k >= y){
        cout << y << endl;
        return;
    }
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