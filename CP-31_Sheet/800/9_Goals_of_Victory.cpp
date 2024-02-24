#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    for(auto &x:arr){
        ans += x;
    }
    cout << 0-ans << endl;
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