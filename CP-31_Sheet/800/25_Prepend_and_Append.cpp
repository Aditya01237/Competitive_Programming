#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int n;
    cin >> n;
    string s;
    cin >> s;
    int first = 0;
    int last = n-1;
    while(last > first){
        if(s[first] == s[last]){
            break;
        }else{
            first++;
            last--;
        }
    }
    cout << last-first+1 << endl;
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