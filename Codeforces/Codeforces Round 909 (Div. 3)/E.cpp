#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;                                          
    vector<int> arr(n);
    int mini = INT_MAX;
    int index = -1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] < mini){
            mini = arr[i];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
            index = i;
        }
    }
    int maxind = -1;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            maxind = i;
        }
    }                                                   
    if(maxind == -1){
        cout << 0 << endl;
    }
    else if(index < maxind){
        cout << -1 << endl;
    }
    else{
        cout << maxind+1 << endl;
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