#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int n,k;
    cin >> n >> k;
    if(k == 1 || k == n || (n-k)%2 == 0 || n%2 == 0 || n%k == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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