#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int n;
    cin >> n;
    int count = 0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] == 2){
            count++;
        }
    }
    if(count%2 == 1){
        cout << -1 << endl;
        return;
    }
    if(count == 0){
        cout << 1 << endl;
        return;
    }
    int i = 0;
    count /= 2;
    while(i<n){
        if(arr[i] == 2)count--;
        if(count == 0)break;
        i++;
    }
    cout << i+1 << endl;
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