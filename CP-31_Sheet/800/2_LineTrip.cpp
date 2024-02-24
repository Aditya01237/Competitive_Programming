#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    /*
    
    1 2 5

    0-1-2-3-4-5-6-7-6-5-4-3-2-1-0
     -#-#- - -#- - - -#- - -#-#- 
    
    */
    int n,x;
    cin >> n >> x;
    int maxi = INT_MIN;
    int last = 0;
    for(int i=0;i<n;i++){
        int curr;
        cin >> curr;
        maxi = max(maxi,curr-last);
        last = curr;
    }
    maxi = max(maxi,2*(x-last));
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