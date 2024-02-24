#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n,k;
    cin >> n >> k;
    double sum = 0;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        sum += a;
    }
    double maxi = INT_MIN;
    for(int i=0;i<n;i++){
        double x;
        cin >> x;
        maxi = max(maxi,abs(x));
    }

    double need = sum/k;
    if(need > maxi){
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