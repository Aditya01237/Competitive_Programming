#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

/*

8 10
9 9
9 8

9 14
10 13
11 12
12 11

*/

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(is_sorted(arr.begin(),arr.end()) == 0){
        cout << 0 << endl;
        return;
    }
    int mini = INT_MAX;
    for(int i=1;i<n;i++){
        int temp = ceil((abs(arr[i]-arr[i-1]))/2.0);
        if((arr[i]+arr[i-1])%2 == 0){
            mini = min(mini,temp+1);
        }else{
            mini = min(mini,temp);
        }
    }
    cout << mini << endl;
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