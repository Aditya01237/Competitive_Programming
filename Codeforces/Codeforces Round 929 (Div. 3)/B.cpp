#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    ll sum = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        mp[a%3]++;
        sum += abs(a);
    }
    if(sum%3 == 0){
        cout << 0 << endl;
    }
    else if(sum%3 == 1){
        if(mp.find(1) != mp.end()){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }
    else{
        cout << 1 << endl;
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