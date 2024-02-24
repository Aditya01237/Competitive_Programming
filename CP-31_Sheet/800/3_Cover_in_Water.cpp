#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '#'){
            ans += count;
            count = 0;
        }else{
            count++;
            if(count >= 3){
                cout << 2 << endl;
                return;
            }
        }
    }
    ans += count;
    cout << ans << endl;
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