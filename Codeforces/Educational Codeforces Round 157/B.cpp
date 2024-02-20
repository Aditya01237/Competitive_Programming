#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans = 0;
    for(int i=1;i<n;i++){
        ans += abs(arr[i-1]-arr[i]);
        ans += abs(arr[n+i-1]-arr[n+i]);
    }
    cout << ans << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " " << arr[2*n-1-i] << endl;
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