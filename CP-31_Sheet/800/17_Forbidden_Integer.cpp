#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> arr;
    while(k >= 1){
        if(k == x){
            k--;
        }
        else if(n >= k){
            arr.push_back(k);
            n -= k;
        }
        else{
            k--;
        }
    }
    if(n != 0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << arr.size() << endl;
        for(int i=0;i<arr.size();i++){
            cout << arr[i] << " ";
        }
        cout << endl;
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