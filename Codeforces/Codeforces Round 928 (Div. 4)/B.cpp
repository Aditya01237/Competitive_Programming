#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    vector<string> arr(n);
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        arr[i] = s;
    }
    int r1 = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(arr[i][j] == '1'){
                sum += 1;
            }
        }
        if(r1 == 0){
            r1 = sum;
        }
        else if(r1 == sum){
            cout << "SQUARE" << endl;
            return;
        }
        else{
            cout << "TRIANGLE" << endl;
            return;
        }
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