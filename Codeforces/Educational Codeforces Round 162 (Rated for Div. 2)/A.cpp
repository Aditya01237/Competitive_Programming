#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int count = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int first=0;
    int last = n-1;
    while(first < n){
        if(arr[first] == 1){
            break;
        }
        first++;
    }
    while(last < n){
        if(arr[last] == 1){
            break;
        }
        last--;
    }
    while(first <= last){
        if(arr[first] == 0)count++;
        first++;
    }
    cout << count << endl;
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