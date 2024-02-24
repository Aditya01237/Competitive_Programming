#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    if(mp.size() > 2 || abs(mp.begin()->second-mp.rbegin()->second) > 1){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
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