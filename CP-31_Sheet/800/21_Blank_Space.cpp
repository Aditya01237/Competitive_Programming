#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int n;
    cin >> n;
    int maxi = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a == 1){
            maxi = max(maxi,count);
            count = 0;
        }else{
            count++;
        }
    }
    maxi = max(maxi,count);
    cout << maxi << endl;
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