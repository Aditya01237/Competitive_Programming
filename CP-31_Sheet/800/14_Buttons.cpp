#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int a,b,c;
    cin >> a >> b >> c;
    a = a + ceil(c/2.0);
    b = b + c - ceil(c/2.0);
    if( a > b){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
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