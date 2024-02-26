#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a > 0)pos++;
        else neg++;
    }
    if(pos >= neg){
        if(neg%2 == 0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
    }else{
        int half = n/2;
        int diff = neg-half;
        if(half%2 != 0)diff++;
        cout << diff << endl;
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