#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        mini = min(mini,abs(0-a));
    }
    cout << mini << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}