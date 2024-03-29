#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n,k;
    cin >> n >> k;
    if(k > 1 || n == 1){
        cout << "Yes" << endl;
        return;
    }
    bool check = true;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            check = false;
            break;
        }
    }
    if(check){
        cout << "Yes" << endl;
    }else{
        cout << "NO" << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}