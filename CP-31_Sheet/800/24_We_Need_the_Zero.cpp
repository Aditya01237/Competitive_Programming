#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int n;
    cin >> n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        ans ^= a;
    }
    if(ans == 0){
        cout << 0 << endl;
    }else if(n%2 == 1){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
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