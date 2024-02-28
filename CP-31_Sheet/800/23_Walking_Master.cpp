#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b > d){
        cout << -1 << endl;
        return;
    }
    int xaxis = abs(c-a);
    int yaxis = abs(d-b);
    if((xaxis == yaxis) && (c>a)){
        cout << xaxis << endl;
    }
    else if((xaxis > yaxis) && (c>a)){
        cout << -1 << endl;
    }
    else{
        int x = c-d+b;
        int ans = abs(c-x) + abs(x-a);
        cout << ans << endl;
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