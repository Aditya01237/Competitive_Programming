#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n,k,x;
    cin >> n >> k >> x;
    if(x != 1){
        cout << "YES" << endl;
        cout << n << endl;
        for(int i=1;i<=n;i++){
            cout << 1 << " ";
        }
        cout << endl;
    }
    else{
        if(n%2 == 0){
            cout << "YES" << endl;
            cout << n/2 << endl;
            for(int i=1;i<=n/2;i++){
                cout << 2 << " ";
            }
            cout << endl;
        }else{
            
        }
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