#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    if(mp.size() == 1){
        cout << "NO" << endl;
        return;
    }
    if(mp.begin()->second == 1){
        cout << "YES" << endl;
        return;
    }
    bool check = true;
    int value = mp.begin()->first;
    for(auto i=next(mp.begin()); i!=mp.end(); i++){
        if(i->first % value != 0){
            check = false;
            break;
        }
    }
    if(check){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
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